#include <stdio.h>
#include <ctype.h>
#include <string.h>
void toCamelCase(char *str) {
    int i, j = 0;
    int len = strlen(str);
    int capitalize = 1;
    for (i = 0; i < len; i++) {
        if (isspace(str[i])) {
            capitalize = 1;
        } else {
            if (capitalize) {
                str[j++] = toupper(str[i]);
                capitalize = 0;
            } else {
                str[j++] = tolower(str[i]);
            }
        }
    }
    str[j] = '\0';
}
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    toCamelCase(str);
    
    printf("Camel Case: %s\n", str);
    return 0;
}
