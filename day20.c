#include <stdio.h>
#include <ctype.h>

int secondHighest(char* s) {
    int largest = -1, second = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            int num = s[i] - '0';

            if (num > largest) {
                second = largest;
                largest = num;
            } else if (num < largest && num > second) {
                second = num;
            }
        }
    }
    return second;
}

int main() {
    char s[] = "dfa12321afd";
    printf("%d", secondHighest(s));
    return 0;
} 