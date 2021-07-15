#include <stdio.h>
void main(){
    int i,num,fact=1;
    printf("Enter number = ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d = %d \n",num,fact);
}