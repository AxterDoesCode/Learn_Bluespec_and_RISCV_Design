import Inter_Stage :: *;
import Instr_Bits :: *;
import StmtFSM :: *;

function OpClass instr_opclass (Bit #(32) instr);
    OpClass result;
    if (is_legal_BRANCH (instr)
        || is_legal_JAL (instr)
        || is_legal_JALR (instr))
        result = OPCLASS_CONTROL;
    else if (is_legal_OP (instr)
        || is_legal_OP_IMM (instr)
        || is_legal_LUI (instr)
        || is_legal_AUIPC (instr))
        result = OPCLASS_INT;
    else if (is_legal_LOAD (instr)
        || is_legal_STORE (instr))
    result = OPCLASS_MEM;
    else if (is_legal_ECALL (instr)
        || is_legal_EBREAK (instr)
        || is_legal_MRET (instr)
        || is_legal_CSRRxx (instr))
    result = OPCLASS_SYSTEM;
    return result;
endfunction
 
(* synthesize *)
module mkTop (Empty);
    // This testbench needs to be extended
   mkAutoFSM (
    seq
	 action
	    Bit #(32) instr_BNE = {7'h0, 5'h9, 5'h8, 3'b001, 5'h3, 7'b_110_0011};
	    $display ("instr_BNE %08h => ", instr_BNE, fshow (instr_opclass (instr_BNE)));
	 endaction
    endseq);
endmodule
