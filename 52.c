// candidate result print
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the value of a,b,c,d,e");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if ((a+b+c+d+e)>=165)
    printf("passed");
    else
    printf("failed");
    return 0;
}