#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,0,4,5,0,7,0 , 0 ,5, 9,6,6,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int cnt = 0;
    int array[n];
    int k=0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            array[k++] = arr[i];
        }
        if(arr[i] == 0){
            cnt++;
        }
    }
    while(k < n) {
        array[k++] = 0;
    }


    for(int i = 0; i < k; i++){
      printf("%d" , array[i]);
    }

    return 0;
}