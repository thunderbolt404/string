#include <stdio.h>
#include <string.h>

int main() {
    char str[100],rev[100];
    int i,j;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    for(i=strlen(str)-1,j=0;i>=0;i--,j++){
        rev[j]=str[i];
    }
    rev[j]='\0';
    printf("%s",rev);
    return 0;
}