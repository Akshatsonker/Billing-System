// TSRN addition
#include<stdio.h>
void add(int,int);
int main()
{
    int x=10,y=20;
    add(x,y); // parenthesis k andar actual argument hai
    return 0;
}
 void  add(int a,int b) //parrenthesis k andar formal arguments hai
 {
    int c;
    c=a+b;
    printf("sum is %d",c);
 }