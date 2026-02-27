#include <string.h>
#include <stdbool.h>

bool wordPattern(char* pattern, char* s) {
    char* words[300];
    int wordCount = 0;

    // split s into words
    char* token = strtok(s, " ");
    while (token != NULL) {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }

    // length check
    if (strlen(pattern) != wordCount)
        return false;

    char* mapCharToWord[256] = {NULL};

    for (int i = 0; i < wordCount; i++) {
        char c = pattern[i];

        // char -> word mapping
        if (mapCharToWord[c] == NULL) {
            // check if this word already mapped to another char
            for (int j = 0; j < i; j++) {
                if (strcmp(words[j], words[i]) == 0 && pattern[j] != c)
                    return false;
            }
            mapCharToWord[c] = words[i];
        } 
        else if (strcmp(mapCharToWord[c], words[i]) != 0) {
            return false;
        }
    }

    return true;
}