#include<stdio.h>
int main()
{
    int n = 38;
    int sum = 0;

    while(n > 9)
    {
        sum = 0;
    
    while(n > 0)
    {
        sum = sum + (n % 10);  //get last digit 
        n = n / 10;     // remove last digit 

    }
    n = sum;
   
}
 printf("sum = %d" , sum);
}