#include <stdio.h>
void strcopy(char *s2,char *s1){
    while(*s1!='\0'){
        *s2=*s1;
        s2++;
        s1++;
    }
}
int main(){
    char str1[]="Hello World";
    char str2[20];
    strcopy(str2,str1);
    printf(" str 2 is %s",str2);
}
