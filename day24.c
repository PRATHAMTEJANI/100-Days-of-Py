#include<stdio.h>
int main()
{
    char c[] = "pratham";
    char d[] = "ath";
    int i,j;

    for(int i = 0; c[i] != '\0' ; i++)
    {
        for(int j = 0 ; d[j] != '\0' ; j++)
        {
            if(d[i+j] != c[j])
                break;
            
        }
            if (d[j] == '\0')
            return i;
    }
    return -1;
}

// int strStr(char* haystack, char* needle) {
//     int i, j;

//     for (i = 0; haystack[i] != '\0'; i++) 
//     {
//         for (j = 0; needle[j] != '\0'; j++) 
//         {
//             if (haystack[i + j] != needle[j])
//                 break;
//         }
//         if (needle[j] == '\0')
//             return i;
//     }
//     return -1;
// }