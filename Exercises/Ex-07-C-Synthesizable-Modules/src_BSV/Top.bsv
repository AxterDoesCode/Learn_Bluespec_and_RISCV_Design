import FIFOF   :: *;

(* synthesize *)
module mkFIFOF_bool (FIFOF #(Bool));
    FIFOF #(Bool) fifo <- mkFIFOF;
    return fifo;
endmodule
