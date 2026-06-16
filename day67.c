#include<stdio.h>
#include<string.h>
int main()
{
    char s[] = "prathamtejani";
    int n;
    int count = 0;
    for(int i = 0 ; i < strlen(s) ; i++ )
    {
            int count = 0;

        for(int j = 0 ; j < strlen(s) ; j++)
        {
            if(s[i] == s[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            printf("%d\n" ,i);
            return 0;
        }
    }
    printf("-1\n");
        return 0;

}