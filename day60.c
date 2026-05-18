#include<stdio.h>

int fibo(int n)
{
    if(n <= 1)
    {
        return n;
    }

    return fibo(n-1) + fibo(n-2);
}

int main()
{
    int n = 4;

    int ans = fibo(n-1) + fibo(n-2);

    printf("%d", ans);

    return 0;
}