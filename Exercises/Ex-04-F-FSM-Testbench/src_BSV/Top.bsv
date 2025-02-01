import StmtFSM :: *;
import Instr_Bits :: *;

function Bit #(32) mkBRANCH_Instr (Bit #(13) pc_offset,
    Bit #(5)  rs2,
    Bit #(5)  rs1,
    Bit #(3)  funct3);
    Bit #(32) return_instr = {pc_offset[12], pc_offset[10:5], rs2, rs1, funct3, pc_offset[4:1], pc_offset[11], opcode_BRANCH};
    return return_instr;
endfunction

(* synthesize *)
module mkTop (Empty);

   mkAutoFSM (
      seq
	 action
	    Bit #(32) instr_BEQ = mkBRANCH_Instr(13'b_1_0100_0000_0001, 5'h9, 5'h8, funct3_BEQ);
	    $display ("instr_BEQ %08h => ", instr_BEQ,
		      fshow (is_legal_BRANCH (instr_BEQ)));
	 endaction

	 action
	    Bit #(32) instr_BNE = {7'h0, 5'h9, 5'h8, 3'b001, 5'h3, 7'b_110_0011};
	    $display ("instr_BNE %08h => ", instr_BNE,
		      fshow (is_legal_BRANCH (instr_BNE)));
	 endaction

	 action
	    Bit #(32) instr_ILL_op = {7'h0, 5'h9, 5'h8, 3'b100, 5'h3, 7'b_110_0000};
	    $display ("instr_ILL_op %08h => ", instr_ILL_op,
		      fshow (is_legal_BRANCH (instr_ILL_op)));
	 endaction

	 action
	    Bit #(32) instr_ILL_f3 = {7'h0, 5'h9, 5'h8, 3'b010, 5'h3, 7'b_110_0011};
	    $display ("instr_ILL_f3 %08h => ", instr_ILL_f3,
		      fshow (is_legal_BRANCH (instr_ILL_f3)));
	 endaction

	 action
	    Bit #(32) instr_alex = {7'h0, 5'h9, 5'h8, 3'b011, 5'h3, 7'b_110_0011};
	    $display ("instr_alex %08h => ", instr_alex,
		      fshow (is_legal_BRANCH (instr_alex)));
	 endaction
      endseq);

endmodule
