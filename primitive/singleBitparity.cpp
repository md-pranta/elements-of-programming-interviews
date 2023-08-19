short parity(long long x){
    x ^= x >> 32;
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    return x & 1;
    short result = 0;
    while(x){
        result ^= 1;
        x = x & (x-1);
    }
    return result;
    while(x){
        result ^= x & 1;
        x >>= 1;
    }
    return result;
}