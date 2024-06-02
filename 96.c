//fibonacci series for nth term 
#include<stdio.h>
int main()
{
    int a=0,b=1,n,i,c;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1 ; i<=n-1 ; i++)
    {
        c=a+b;
        a=b;
        b=c;

    }
    printf("%d",a);
    return 0; 
    }