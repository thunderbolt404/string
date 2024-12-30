#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter yout string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int l1=strlen(str);
    int l2=0;
    while(str[l2]!='\0'){
        l2++;
    }
    printf("Length with function: %d\n",l1);
    printf("Length without function: %d",l2);
    return 0;
}