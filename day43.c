#include<stdio.h>
int main()
{
    int arr[]  = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = n- 1;
    
    while(i >= 0)
    {
        printf("%d" , arr[i]);
        i--;
    }
}