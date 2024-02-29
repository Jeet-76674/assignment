#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; // Store frequency of each character
    int i, max = 0;
    char maxChar;

    printf("Enter any string: ");
    gets(str);

    // Initialize frequencies of all characters to 0
    for (i = 0; i < 256; i++) {
        freq[i] = 0;
    }

    // Finds frequency of each character
    i = 0;
    while (str[i] != '\0') {
        int ascii = (int)str[i];
        freq[ascii]++;
        i++;
    }

    // Finds maximum frequency
    for (i = 0; i < 256; i++) {
        if (freq[i] > freq[max]) {
            max = i;
        }
    }

    maxChar = (char)max;
    printf("Maximum occurring character is '%c' = %d times.\n", maxChar, freq[max]);

    return 0;
}

