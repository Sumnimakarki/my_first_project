#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter any two number:\n");
    scanf("%d%d"&a,&b);
    sum=a+b;
    printf("The sum of %d and %d is:%d",a,b,sum);
    return 0;
}