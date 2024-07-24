
//Pointer Arithmetic
#include <stdio.h>
int main(){
    int x;
    int *ptr=&x;
    printf("Address of x before: %d\n",ptr);//say some xxxxx4
    ptr=ptr+1;//incrementing by 1*sizeof(int)
    printf("Address of x after: %d\n",ptr);// will be xxxxx8
}

