// finding number is armstrong no. or not   if input is three digit( but we should find digits in a given no.)
#include<stdio.h>
int main()
{
    int n,r,arm=0,c;
    printf("enter the value of n");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arm=arm+r*r*r;
        n=n/10;
    }
    if(c==arm)
    printf(" amstrong number");
    else
    printf("not armstrong number");
    return 0;
}