#include<stdio.h>
int main()
{
    int grid[3][3] = {
    {1, 3, 1},
    {1, 5, 1},
    {4, 2, 1}};
    
    int sum = 0;
    int minsum = 0;

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            minsum = minsum + grid[i][j];
        }
        break;
    }
    // printf("%d",minsum);

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            sum = sum + grid[i][j];

        }
        if(sum <= minsum)
        {
            minsum = sum;
        }
        //printf("%d \n" , minsum);
        sum = 0;
    }
    
    // printf("%d \n" , sum);
    // printf("%d" , minsum);


    
    int rowsum = 0;
    int rowminsum = 0;
    int j;

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            rowminsum = rowminsum + grid[i][j];
            break;
        }
    }
    // printf("%d \n" , rowminsum);

    for(int j = 0 ; j < 3 ; j++)
    {
        for(int i = 0 ; i < 3 ; i++)
        {
            rowsum = rowsum + grid[i][j];
        }

        // printf("%d \n" , rowsum);
        if(rowsum < rowminsum)
        {
            rowminsum = rowsum;
        }
        rowsum = 0;
        
    }
    // printf("%d" , rowminsum);

    int ans = rowminsum + minsum;
    printf("%d" , ans); 

    return 0;
}