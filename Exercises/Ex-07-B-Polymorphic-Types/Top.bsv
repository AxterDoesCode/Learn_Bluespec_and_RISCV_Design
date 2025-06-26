typedef struct {
    Mem_Req_Type req_type;
    Mem_Req_Suze req_size;
    xlen addr;
    Bit #(64) data;
} NMem_Req #(type xlen)
