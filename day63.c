#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char num1[] = "123";
    char num2[] = "11"; 

    int num = atoi(num1);
    int num3 = atoi(num2);
    int sum = (num + num3);

    
    
    char* str = malloc(200);
    
    sprintf(str, "%d", sum);
    printf("%d" , sum);


}