#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int a;
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("enter element to search: ");
    scanf("%d" , &a);

    for(int i = 0; i<=n ; i++)
    {
        if(arr[i] == a)
        {
            printf("founded %d" , i);
            break;

        }
    }

    return 0;
}