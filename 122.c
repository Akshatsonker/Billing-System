//function TSRS addition
#include<stdio.h>
int add(int,int);
int main()
{
    int k,x=10,y=20;
    k=add(x,y);
    printf("sum is %d",k);
    return 0;
}
int add(int a,int b)
{
int c ;
c=a+b;
return c;
}
