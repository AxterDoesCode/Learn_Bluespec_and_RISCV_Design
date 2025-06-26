import FIFOF   :: *;

// Interfaces not permitted in expression block context?
// Does this mean the example in the textbook is pseudocode or what
function FIFOF_I #(t) to_FIFOF_I (FIFOF #(t) f);
    interface FIFOF_I #(Mem_Rsp) fo_IMem_rsp;
        method Bool notFull();
            return f.notFull;
        endmethod

        method Action enq (t x);
            return f.enq(x);
        endmethod
    endinterface
endfunction

(* synthesize *)
module mkTop (Empty);
    let fifo <- mkFIFOF;
    let res = to_FIFOF_I (fifo);
    $display("Is the FIFOF_I full: ", fshow(res.notFull()));
    $finish();
endmodule
