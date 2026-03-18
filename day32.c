#include <stdio.h>
#include <stdlib.h>

char* multiply(char* num1, char* num2) {
    long long n1 = atoll(num1);
    long long n2 = atoll(num2);

    long long product = n1 * n2;

    char* result = (char*)malloc(30 * sizeof(char));
    sprintf(result, "%lld", product);

    return result;
}