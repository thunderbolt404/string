#include <stdio.h>
#include <ctype.h>
#include <string.h>
void countCharacters(char str[]) {
    int vowels = 0, consonants = 0, spaces = 0, words = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' ||
         tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
            vowels++;
        } else if (isalpha(str[i]))consonants++;
        else if (str[i] == ' ') spaces++;
    }
    if (strlen(str) > 0) {
        words = 1;
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')words++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Spaces: %d\n", spaces);
    printf("Words: %d\n", words);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    countCharacters(str);
    return 0;
}
