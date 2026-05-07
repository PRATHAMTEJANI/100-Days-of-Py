#include <stdio.h>
int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    int sum = 0;
    int maxsum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = prices[j] - prices[i];
            if (sum > maxsum)
            {
                maxsum = sum;
            }
        }
    }

    printf("Maximum profit is %d\n", maxsum);
}