#include<stdio.h>
int main()
{
    int a,b,c,A;
    printf("enter the value of a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    A=(a+b+c)/3;
    printf("average of three integers %d %d %d is %d",a,b,c,A);
    return 0;
    }