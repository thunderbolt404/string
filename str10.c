#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toggleCase(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Entered string is: %s\n", str);
    
    toggleCase(str);
    
    printf("String after toggle case: %s\n", str);
    return 0;
}
