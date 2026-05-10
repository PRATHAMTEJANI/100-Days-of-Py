#include<stdio.h>
int main()
{
    int grid[3][3] = {
    {1, 3, 1},
    {1, 5, 1},
    {4, 2, 1}};

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
    printf("%d" , rowminsum);
    
}
