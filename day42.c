#include<stdio.h>

int main()
{
    int n = 16;

    for(int i = 2; i <= n; i *= 2)
    {
        if(n % i == 0)
        {
            printf("complete for %d\n", i);
        }
        else
        {
            printf("not try again\n");
        }
    }

    printf("power of 2");
}