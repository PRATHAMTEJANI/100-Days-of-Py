int countPrimes(int n) {
    int count = 0;

    for (int num = 2; num < n; num++) {
        int isPrime = 1;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            count++;
        }
    }

    return count;
}