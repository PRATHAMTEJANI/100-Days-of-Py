#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0 ; i < n - 1 ; i++)
    {
        for(int j = i + 1 ; j< n ; j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        printf("%d" , arr[i]);
    }

    int arr1[100];
    for(int i = 0 ; i< n-1 ; i++)
    {
        if(arr[i] = arr[i+1])
        {
            
        }
    }
    
    return 0;
}