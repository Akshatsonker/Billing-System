//TSRS factorial
#include<stdio.h>
int fac(int);
int main()
{
    int n,k;
    printf("enter the value of n");
    scanf("%d",&n);
    k=fac(n);
    printf("factorial is %d",k);
    return 0;
}
int fac(int a)
{
    int c=1,i;
    for(i=1 ; i<=a ; i++)
    {
    c=c*i;
    }
    return c;
}