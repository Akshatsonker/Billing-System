// no. is divisible by 3 or 7
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    if ((n%3==0)||(n%7==0))
    printf("divisible");
    else
    printf("non divisible");
    return 0;
}