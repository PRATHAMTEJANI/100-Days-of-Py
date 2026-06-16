#include<stdio.h>
#include<string.h>
int main()
{
    char s[] = "abab";
    char an[100];
    int i;

    for(i = 0 ; s[i] != '\0' ; i++)
    {
        an[i] = s[i];
    }
    an[i] = '\0';
    printf("%s", an);
    return 0;
}