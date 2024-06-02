#include<iostream>
void f1(int,int);
int main()
{
    int a;
    char b;
    printf("enter the value of a,b");
    scanf("%d %c",&a,&b);
    f1(a,b);
}
void f1(int a,int b)
{
    printf("%d ",a+b);
}