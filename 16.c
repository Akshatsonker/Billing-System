#include<stdio.h>
int main()
{
    int p,r,t,s;
    printf("enter the value of p,r,t");
    scanf("%d %d %d",&p,&r,&t);
    s=p*r*t/100;
    printf("simple interest of %d %d %d is %d",p,r,t,s);
    return 0;
}
