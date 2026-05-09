#include<stdio.h>
#include<string.h>
int main()
{
    char word1[] =  "horse";
    char word2[] = "ors";
    int count = 0;
    for(int i = 0 ; i < strlen(word1) ; i++)
    {
        if(word1[i] != word2[i])
            {
                count++;
            }
            
        
    }
    printf("%d",count);
}