#include<stdio.h>
int main()
{
    int n , rev = 0, temp , digit;
    printf("enter a number :");
    scanf("%d" , &n);

    temp = n;
    while(n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if(rev == temp)
    {
       return printf("Palindrome");
    }else{
        return printf("not alindrome");
    }
    

}

#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int rev = 0;

    while (x > rev) {
        rev = rev * 10 + x % 10;
        x = x / 10;
    }

    return (x == rev || x == rev / 10);
}