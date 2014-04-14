uint16_t assemble(uint8_t A, uint8_t B){
    int i;
    uint16_t res;
    for (i=0; i<8; i++)
        res[i] = A[i];
    for (j=0; j<8; j++)
        res[j+8] = B[j];
    return res;
}