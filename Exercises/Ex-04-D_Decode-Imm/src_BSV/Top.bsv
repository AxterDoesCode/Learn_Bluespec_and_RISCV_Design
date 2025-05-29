function Bit #(12) instr_imm_I (Bit #(32) instr);
    return instr [31:20];
endfunction

function Bit #(12) instr_imm_S (Bit #(32) instr);
    return { instr [31:25], instr [11:7]};
endfunction

function Bit #(13) instr_imm_B (Bit #(32) instr);
    return {instr [31], instr [7], instr [30:25], instr [11:8], 1'b0};
endfunction

function Bit #(20) instr_imm_U (Bit #(32) instr);
    return instr [31:12];
endfunction

function Bit #(21) instr_imm_J (Bit #(32) instr);
    return {instr [31], instr[19:12], instr[20], instr[30:21], 1'b0};
endfunction

// Really scuffed testbench but oh well imma just move on
(* synthesize *)
module mkTop (Empty);
    Bit #(32) testInstruction = 32'hFA74523D;
    rule tb;
        $display ("instr_imm_I: %012b", instr_imm_I(testInstruction));
        $finish (0);
    endrule
endmodule
