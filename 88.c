// reverse of numbers
#include<stdio.h>
int main()
{
    int n,r,y=0;
    printf("enter the value of n");
    scanf("%d ",&n);
    while(n!=0)
    {
     r=n%10;
     y=y*10+r;
     n=n/10;
    }
    printf("reverse of a number is %d",y);

    return 0;
}
