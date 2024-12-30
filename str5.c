#include <stdio.h>
#include <string.h>

int main() {
    int str1[100],str2[100],temp[100];
    int i,j;
    printf("Str1=");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Str2=");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';
    for(i=0;str1[i]!='\0';i++){
        temp[i]=str1[i];
    }
    temp[i]='\0';
    for(i=0;str2[i]!='\0';i++){
        str1[i]=str2[i];
    }
    str1[i]='\0';
    for(i=0;temp[i]!='\0';i++){
        str2[i]=temp[i];
    }
    str2[i]='\0';
    printf("Str1=%sStr2=%s",str1,str2);
    return 0;
}