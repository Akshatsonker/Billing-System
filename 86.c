// factorial of number
#include<stdio.h>
int main()
{
    int i,fac=1,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        fac=fac*i;
    }
    printf("%d",fac);
    return 0;
}