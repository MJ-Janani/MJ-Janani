
#include <stdio.h>

int main() {
    int a[100],n,i,*ptr;
    ptr=&a[0];
    printf("Enter number of values:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for (int i=0;i<n;i++){
        //scanf("%d",a+i);//equivalent to &a[i]
        scanf("%d",ptr+i);
    }
    printf("Printing the elements:\n");
    for(int i=0;i<n;i++){
        //printf("%2d",*(a+i));//equivalent to a[i]
        printf("%2d",*(ptr+i));
    }
    
}
