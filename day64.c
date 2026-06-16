#include<stdio.h>
#include<string.h>
int main()
{
    char s[] = "abab";
    int len = strlen(s);
    char an[]=" ";
    an[0] = s[0];
    for(int i = 1 ; s[i] != '\0' ; i++)
    {
        
        if(s[i] != an[i])
        {
            an[i] = a[i] + s[i];
        }


        //printf("%c" , s[i]);
    }
    //printf("%s", s);
    //printf("%c" , s[0]);
    printf("%s", an);
    return 0;
}