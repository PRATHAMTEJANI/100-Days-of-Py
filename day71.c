#include<stdio.h>
int main()
{
    int arr[] = {4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int are[] = {};
    //printf("%d" , arr[n-1]);
    
    for(int j = 0 ; j < k ; j++)
    {
        for(int i = 0 ; i < j ; i++)
        {
            arr[0] = arr[n-1];
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d" , arr[i]);
    }
    
}
//without linked list no one can make /// pratham make but it take more time 
