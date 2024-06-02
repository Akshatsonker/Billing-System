// no.  is three digit or not?
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n>=100&&n<=999)
    {
        printf("it is three digit no.");
    }
        else
        {
        printf("it is not three digit no.");
    }
    return 0;
}