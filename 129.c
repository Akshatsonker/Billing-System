//TSRS SIMPLE INTEREST
#include<stdio.h>
int simpleinterest(int,int,int);
int main()
{
    int p=100,r=56,t=42,k;
    k=simpleinterest(p,r,t);
    printf("simple interest is %d",k);
    return 0;

} 
int simpleinterest(int a,int b,int c)
{
    int d;
    d=(a*b*c)/100;
    return d;

}