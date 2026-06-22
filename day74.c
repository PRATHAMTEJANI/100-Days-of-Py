#include<stdio.h>
#include<string.h>
int main()
{
    char name[] = "balloon";
    char text[] = "loonbalxballpoon";
    int count = 0 , num = 0;
    int b = 1 , a = 1 , l = 2 , o = 2 , n = 1;
    int B = 0;

    for(int i = 0 ; i < strlen(name) ; i++)
    {
        for(int j = 0 ; j < strlen(text) ; j++)
        {
            if(name[i] == text[j])
            {
                B++;
                printf("%d" , B);
            }
        }
        // printf("%c" , text[i]);
        // num++;
    }
    //printf("%d" , num / 7);
}

// int maxNumberOfBalloons(char* text)
// {
//     int freq[26] = {0};

//     for(int i = 0; text[i] != '\0'; i++)
//     {
//         freq[text[i] - 'a']++;
//     }

//     int b = freq['b' - 'a'];
//     int a = freq['a' - 'a'];
//     int l = freq['l' - 'a'] / 2;
//     int o = freq['o' - 'a'] / 2;
//     int n = freq['n' - 'a'];

//     int ans = b;

//     if(a < ans) ans = a;
//     if(l < ans) ans = l;
//     if(o < ans) ans = o;
//     if(n < ans) ans = n;

//     return ans;
// }