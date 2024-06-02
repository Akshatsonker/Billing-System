// odd and even without % operator
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n/2*2==n)
    printf(" even no.");
    else
    printf("odd no.");
    return 0;
    }