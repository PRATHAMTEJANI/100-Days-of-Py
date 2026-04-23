#include <stdio.h>

void generate(char current[], int pos, int open, int close, int n) {
    // Base case
    if (pos == 2 * n) {
        current[pos] = '\0';
        printf("%s\n", current);
        return;
    }

    // Add '('
    if (open < n) {
        current[pos] = '(';
        generate(current, pos + 1, open + 1, close, n);
    }

    // Add ')'
    if (close < open) {
        current[pos] = ')';
        generate(current, pos + 1, open, close + 1, n);
    }
}

int main() {
    int n = 3;

    // Static array (size = 2*n + 1 for '\0')
    char current[100];  // enough for n up to 50

    generate(current, 0, 0, 0, n);

    return 0;
}