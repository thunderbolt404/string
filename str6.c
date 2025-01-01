#include <stdio.h>
#include <string.h>
void convertcase(char str[]){
    int i=0;
    printf("Entered string is: %s\n", str);
    for(i=0;str[i]!='\0';i++)str[i]= toupper(str[i]);
    printf("String in upper case is: %s\n",str);
    for(i=0;str[i]!='\0';i++)str[i]= tolower(str[i]);
    printf("String in lower case is: %s",str);
}

int main() {
    char str[100];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    convertcase(str);
    return 0;
}