#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char str1[100],str2[100];
    printf("Str1=");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    for(int i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("Str2=%s",str2);
    return 0;
}