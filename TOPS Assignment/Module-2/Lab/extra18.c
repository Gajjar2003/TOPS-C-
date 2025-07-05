// Write a C program that counts the number of words in a sentence entered by the user.

#include <stdio.h>
#include <string.h>


int countWords(char str[]) {
    int i = 0, words = 0, inWord = 0;

    while (str[i] != '\0') {
        if (isspace(str[i])) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
        i++;
    }
    return words;
}

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int wordCount = countWords(str);

    printf("Number of words: %d\n", wordCount);


}

