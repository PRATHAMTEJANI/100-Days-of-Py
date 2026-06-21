#include<stdio.h>
int main()
{
    int costs[] = {1,3,2,4,1};
    int n = sizeof(costs) / sizeof(costs[0]);
    int coin = 7;
    int count = 0 , sum=0;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j< n - i -1 ; j++)
        {
            if(costs[j] > costs[j+1])
            {
                int temp = costs[j];
                costs[j] = costs[j + 1];
                costs[j + 1 ] = temp;
            }
        }
    }
    // for(int i = 0; i < n; i++)
        // printf("%d ", arr[i]);
// 


    for(int i = 0 ; i < n ; i++)
    {
        sum = sum + costs[i];
        if(sum <= coin)
        {
            
            count++;
        }
        else{
            break;
        }
    }
    printf("%d" , count);
    //printf("%d" , sum);
    return 0;
}

// TIME LIMIT EXCEED !hahahaha
