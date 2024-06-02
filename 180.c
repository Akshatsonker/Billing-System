#include<stdio.h>
int main()
{
    int n,i=0,a,b,c;
    printf("enter the value of n");
    scanf("%d",&n);
    a=n%10;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    b=n/(10^(i-1));
    c=a+b;
    printf("%d",c);
    return 0;
}