void GospersHack(int n, int k) {
    i64 cur = (1 << k) - 1;
    i64 limit = (1 << n);
    while (cur < limit) {
        // do something
        i64 lbit = cur & -cur;
        i64 r = cur + lbit;
        cur = (((r ^ cur) >> 2) / lbit) | r;
    }
}