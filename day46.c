#include<stdio.h>
int main()
{

    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int mxsum = nums[0];
    int cm = 0;

    for (int i = 0 ; i < n ; i++)
    {
        cm = cm + nums[i];
        if(cm > mxsum)
        {
            mxsum = cm;
        }
        if(cm < 0)
        {
            cm = 0;
        }
    }
    printf("Maximum subarray sum is %d\n", mxsum);
}
