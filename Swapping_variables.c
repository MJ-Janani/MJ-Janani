#include <stdio.h>
//Swapping both the variables without using another temp variable using pointers
int main() {
    int a=10,b=20;
    int *p1=&a,*p2=&b;//p1 and p2 contains the address of a and b
    printf("Before Swapping a= %i b= %i\n",*p1,*p2);//*p1 , *p2 gives the value
    *p1= *p1 + *p2;
    *p2= *p1 - *p2;
    *p1= *p1 - *p2;
    printf("After Swapping a= %i b= %i\n",*p1,*p2);
}
/*
Before Swapping a= 10 b= 20
After Swapping a= 20 b= 10
*/
