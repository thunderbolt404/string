#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int isPal=1;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;i<strlen(str)/2;i++){
        if(str[i]!=str[strlen(str)-i-1]){
            isPal=0;
            break;
        }
    }
    if(isPal)printf("Yes");
    else printf("No");
    return 0;
}