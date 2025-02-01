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
import Instr_Bits   :: *;
import Mem_Req_Rsp  :: *;
import Mems_Devices :: *;

// ****************************************************************

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

                            // There seems to be more params needed
                            dummy_FIFOF_O,
                            dummy_FIFOF_I,

						    // DMem interface
						    to_FIFOF_O (f_reqs),
						    to_FIFOF_I (f_rsps));

   function Action a_req (Mem_Req_Type t,
        Mem_Req_Size  s,
        Bit #(64) a, // Addr
        Bit #(64) d, // Data
        Bit #(64) i // Inum
   );
   action
   let mem_req = Mem_Req{req_type: t,
        size: s,
        addr: a,
        data: d,
        inum: i,
        pc: 'h_8000_0000,
        instr: ?};
	f_reqs.enq (mem_req);
	$display ("mem_req: ", fshow_Mem_Req (mem_req));
    endaction
   endfunction

   function Action a_rsp();
	 action // a_rsp
	    let mem_rsp = f_rsps.first;
	    f_rsps.deq;
	    // Alternative idiom to do "first" and "deq" together
	    // let mem_rsp <- pop_o (to_FIFOF_O (f_rsps));

	    $display ("mem_rsp: ", fshow_Mem_Rsp (mem_rsp, True));
	 endaction
    endfunction

   mkAutoFSM (
      seq
	 action
	    $display ("Initializing memory model");
	    let init_params = Initial_Params {flog: InvalidFile};
	    mems_devices.init (init_params);
	 endaction

     a_req(funct5_STORE, MEM_1B, 'h_6010_0000, 'b_01001000, 1);
     a_req(funct5_STORE, MEM_1B, 'h_6010_0000, 'b_01100101, 1);
     a_req(funct5_STORE, MEM_1B, 'h_6010_0000, 108, 1);
     a_req(funct5_STORE, MEM_1B, 'h_6010_0000, 108, 1);
     a_rsp();
     a_rsp();
     a_rsp();
     a_rsp();
     a_req(funct5_STORE, MEM_1B, 'h_6010_0000, 111, 1);
     a_req(funct5_STORE, MEM_1B, 'h_6010_0000, 32, 1);
     a_req(funct5_STORE, MEM_1B, 'h_6010_0000, 87, 1);
     a_req(funct5_STORE, MEM_1B, 'h_6010_0000, 111, 1);
     a_rsp();
     a_rsp();
     a_rsp();
     a_rsp();
     a_req(funct5_STORE, MEM_1B, 'h_6010_0000, 114, 1);
     a_req(funct5_STORE, MEM_1B, 'h_6010_0000, 108, 1);
     a_req(funct5_STORE, MEM_1B, 'h_6010_0000, 100, 1);
     a_req(funct5_STORE, MEM_1B, 'h_6010_0000, 33, 1);
     a_rsp();
     a_rsp();
     a_rsp();
     a_rsp();
     a_req(funct5_STORE, MEM_1B, 'h_6010_0000, 13, 1);
     a_req(funct5_STORE, MEM_1B, 'h_6010_0000, 10, 1);
     a_rsp();
     a_rsp();
      endseq);

endmodule

// ****************************************************************

endpackage
