// no. contain a given digit or  not
#include<stdio.h>
int call(int , int);
int main()
{
    int n,d,k;
    printf("enter the value of n,d");
    scanf("%d %d",&n,&d);
    k=call(n,d);
    if(k==1)
    printf("yes");
    else 
    printf("no");
    return 0;
}
int call(int a,int b)
{
    int j;
    while(a)
    {
        j=a%10;
        if(j==b)
        {
        return 1;
        break;
        }
        a=a/10;
    }
    return 0;
}