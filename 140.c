// factorial by recursion
#include<stdio.h>
int fac(int N);
int main()
{
    int n;
    printf("enter the value  of n");
    scanf("%d",&n);
    printf("factorial of n number is %d",fac(n));
    return 0;
}
int fac(int N)
{
    if(N==0)
    return 1;
    return (N*fac(N-1));
}