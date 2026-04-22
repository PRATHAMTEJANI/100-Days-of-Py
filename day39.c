#include<stdio.h>
int main()
{
    printf("Enter a number: ");
    int digit, i = 0;
    scanf("%d", &digit);

    int arr[100];

    while(digit > 0)
    {
        arr[i] = digit % 10;
        digit = digit / 10;
        i++;
    }

    

    printf("The reverse of the number is: ");
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
}