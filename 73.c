// it is triangle or not
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    printf("it is a triangle");
    else 
    printf("it is not a triangle");
    return 0;
}