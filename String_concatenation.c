#include <iostream>
void str_con(char *s2,char *s1){
    while(*s2!='\0'){
        s2++;//moving to the end of string s2
    }
    while(*s1!=0){
        *s2++=*s1++;  //copying string 1 content to s2 after the s2 end
        *s2='\0';
    }
}
int main(){
    char str1[]="Hello",str2[]="World";
    str_con(str1,str2);
    printf("String 1 is %s\n",str1);//HelloWorld
}
