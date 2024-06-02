#include<stdio.h>
int main()
{
    int l,b,h,v;
    printf("enter the value of l,b,h");
    scanf("%d %d %d",&l,&b,&h);
    v=l*b*h;
    printf("volume of cuboid %d %d %d is %d",l,b,h,v);
    return 0;
}