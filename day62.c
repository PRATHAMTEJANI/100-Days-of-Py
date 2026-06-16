#include<stdio.h>

int main()
{
    int nums[] = {2,3,1,1,4};

    int n = sizeof(nums) / sizeof(nums[0]);

    int farthest = 0;

    for(int i = 0; i < n; i++)
    {
        // Cannot reach this index
        if(i > farthest)
        {
            printf("False");
            return 0;
        }

        // Calculate maximum reach
        int reach = i + nums[i];

        // Update farthest reach
        if(reach > farthest)
        {
            farthest = reach;
        }

        printf("\nIndex = %d", i);
        printf("  nums[i] = %d", nums[i]);
        printf("  Reach = %d", reach);
        printf("  Farthest = %d", farthest);
    }

    printf("\n\nTrue");

    return 0;
}