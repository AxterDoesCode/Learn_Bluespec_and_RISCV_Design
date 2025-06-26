package Top;

// ****************************************************************
// Imports from libraries

import StmtFSM :: *;
import FIFOF   :: *;

// ----------------
// Imports from 'vendor' libs

import Semi_FIFOF :: *;

// ----------------
// Local imports

import Utils        :: *;
import Arch         :: *;
import Instr_Bits   :: *;
import Mem_Req_Rsp  :: *;
import Mems_Devices :: *;

import Inter_Stage  :: *;
import Fn_Fetch     :: *;

// ****************************************************************

function Action a_req (Bit #(XLEN) pc, Bit #(64) inum, FIFOF #(Mem_Req) f_reqs);
      action
	 let predicted_pc = 0;            // Only relevant in Fife
	 let epoch        = 0;            // Only relevant in Fife
	 let flog         = InvalidFile;  // log file
	 let y <- fn_Fetch (pc, predicted_pc, epoch, inum, flog);

	 f_reqs.enq (y.mem_req);

	 $display ("y: ", fshow (y));
	 $display ("y.to_D: ",    fshow_Fetch_to_Decode (y.to_D));
	 $display ("y.mem_req: ", fshow_Mem_Req (y.mem_req));
      endaction
   endfunction

   function Action a_rsp (FIFOF #(Mem_Rsp) f_rsps);
      action
	 let mem_rsp <- pop_o (to_FIFOF_O (f_rsps));
	 $display ("mem_rsp: ", fshow_Mem_Rsp (mem_rsp, True));
      endaction
   endfunction

(* synthesize *)
module mkTop (Empty);

   FIFOF #(Mem_Req) f_reqs <- mkFIFOF;
   FIFOF #(Mem_Rsp) f_rsps <- mkFIFOF;


   // Instantiate the memory model used by Drum and Fife.
   // We "stub out" the first five parameters and only use the last two.
   Mems_Devices_IFC mems_devices <- mkMems_Devices (// IMem interface
						    dummy_FIFOF_O,
						    dummy_FIFOF_I,

						    // Speculative DMem interace
						    dummy_FIFOF_O,
						    dummy_FIFOF_I,
						    dummy_FIFOF_O,
						    
						    // Think a bit more dummy FIFOs are needed
						    dummy_FIFOF_O,
						    dummy_FIFOF_I,

						    // DMem interface
						    to_FIFOF_O (f_reqs),
						    to_FIFOF_I (f_rsps));

   mkAutoFSM (
      seq
	 action
	    $display ("Initializing memory model");
	    let init_params = Initial_Params {flog: InvalidFile};
	    mems_devices.init (init_params);
	 endaction

	 a_req ('h_8000_0000, 1, f_reqs);
	 a_rsp(f_rsps);
	 a_req ('h_8000_0004, 1, f_reqs);
	 a_rsp(f_rsps);
      endseq);

endmodule

// ****************************************************************

endpackage
