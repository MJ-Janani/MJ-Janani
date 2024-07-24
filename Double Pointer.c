#include <stdio.h>
int main(){
    int a=10,*p,**pp;
    p=&a;//2000
    pp=&p;//3000
    printf("a= %d\n",a);//10
    printf("*p= %d\n",*p);//*(2000)= 10
    printf("**p=%d\n",**pp);//**(3000)= *(2000)= 10
}
