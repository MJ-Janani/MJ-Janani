
#include <stdio.h>

int main() {
    char str[]="Hello Janani",*ptr;
    int len=0;
    ptr=str;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    printf("Length of the string is %d",len);
}
//Passing string name as parameter to the function
#include <stdio.h>
int mystrLen(char *ptr){
    char *temp;
    temp=ptr;
    while(*temp!='\0')
    temp++;
    return(temp-ptr);
}
int main() {
    char str[]="Hello Janani";
    int n;
    n=mystrLen(str);
    printf("STring length is %d",n);
}
