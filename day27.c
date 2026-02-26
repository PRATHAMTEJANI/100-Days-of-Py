#include <stdio.h>

int main()
{
    int arr[] = {2,2,1,1,1,2,2};
    int len = sizeof(arr) / sizeof(arr[0]);

    int candidate = arr[0];
    int count = 1;

    for(int i = 1; i < len; i++)
    {
        if(arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }

        if(count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
    }

    printf("Majority Element: %d", candidate);
    return 0;
}