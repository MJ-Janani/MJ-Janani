//Call by reference variable -  &y = x (both same)
//Passing address of variable as parameter to function
#include <stdio.h>

void find_sum(int *ptr1,int *ptr2){
    int result;
    result=*ptr1+*ptr2;
    printf("Sum is %d\n",result);
}
int main(){
    int a,b;
    printf("Enter any two variables a,b\n");
    scanf("%d%d",&a,&b);//stores a ,b at addresses
    find_sum(&a,&b);
}
