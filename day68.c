#include<stdio.h>
int main()
{
    int arr[] = {0,1,0,12,13,1,12};
    int count = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    int arr1[] = {};
    int j=0;
    for(int i = 0 ; i <= n-1 ; i++)
    {
        if(arr[i] == 0)
        {
            count++;
            continue;
        } 
        arr1[j++] = arr[i] ;
        //printf("%d\t" , arr1[i]);
    }
    while(count > 0)
    {
        arr1[j++] = 0;
        count--;
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    
    //printf("%d" , count);
    return 0;
}