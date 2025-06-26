import Instr_Bits :: *;
import CSRs :: *;
import CSR_Bits :: *;
import StmtFSM :: *;

(* synthesize *)
module mkTop (Empty);
    CSRs_IFC csrs <- mkCSRs;
    mkAutoFSM (
    seq
        csrs.set_TIME(0);
        action
            match {.a, .b} <- csrs.mav_csrrxx({csr_addr_MTVEC, 5'b00000, 3'b001, 5'b00000, opcode_SYSTEM}, 32'hFFFFFFF7);
        endaction
        action
            match {.c, .d} <- csrs.mav_csrrxx({csr_addr_MTVEC, 5'b00000, 3'b001, 5'b00001, opcode_SYSTEM}, 32'hFFFFFFF7);
            $display("Read value is: " ,d);
        endaction
    endseq
    );
endmodule
