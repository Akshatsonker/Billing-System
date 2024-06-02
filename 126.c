// TNRS ADDITION
#include<stdio.h>
int add();
int main()
{
    int k;
   k=add();
   printf("sum is %d",k);
    return 0;
}
int add()
{
    int c,a,b;
    printf("enter the value of a,b");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
}
