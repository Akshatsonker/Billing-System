// last digit stored as zero
#include<stdio.h>
int main()
{
    int x;
    printf("enter the value of x");
    scanf("%d",&x);
    x=x/10;
    x=x*10;
    printf("the value of is %d",x);
    return 0;

}