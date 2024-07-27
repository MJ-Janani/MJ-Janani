//Accessing string using pointer
#include <stdio.h>

int main() {
    char str[]="Hello World",*ptr;//pointer pointing to base address of the string
    ptr=str;
    while(*ptr!=0){
        printf("%c",*ptr);
        ptr++;
    }
}
