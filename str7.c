#include <stdio.h>
#include <ctype.h>
#include <string.h>

void printVandC(char str[]) {
    int i;
    printf("Vowels: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    printf("Consonants: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) && !(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u')) {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printVandC(str);
    return 0;
}
