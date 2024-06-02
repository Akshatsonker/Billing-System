// even or odd without % operator
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n==n/2*2)
    printf("even ");
    else 
    printf("odd");
return 0;
}