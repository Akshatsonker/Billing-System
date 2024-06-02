// addition of three digts in no.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("addition of three digits %d",n=n/100+n/10%10+n%10);
    return 0;
}