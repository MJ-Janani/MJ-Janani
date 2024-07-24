
//Pointer to point a function
#include <stdio.h>

int find_sum(){
    int a,b;
    printf("Enter any two variables a,b\n");
    scanf("%d%d",&a,&b);
    return a+b;
}
int main(){
    int result;
    //declare a pointer tht is pointing to a function
    int (*ptr)();
    ptr= &find_sum;
    result=(*ptr)();
    //calling the function find_sum and storing in result
    printf("The sum is %d\n",result);
}
