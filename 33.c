// swapping without using third variable,without arithmetic operator
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a,b");
    scanf("%d %d",&a,&b);
    a==b;
    b==a;
    printf("%d %d",b,a);
    return 0;
}