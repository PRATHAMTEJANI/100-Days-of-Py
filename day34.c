double myPow(double x, int n) {
    double res = 1;
    long long p = n;   // handle negative case safely

    if (p < 0) {
        x = 1 / x;
        p = -p;
    }

    while (p > 0) {
        if (p % 2 == 1) {
            res = res * x;
        }
        x = x * x;
        p = p / 2;
    }

    return res;
}