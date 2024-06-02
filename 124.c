// TNRN addition
#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
}
 void add()
 //add ke parenthesis m kuch nhi matlab it takes nothing
{
    int a,b,c;
    printf("enter the value of a,b");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("sum is %d",c);
    // no return so it is  not return nothing
}