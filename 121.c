// no. is armstrong no. or not?
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,n=0,r,sum=0,p,i;
    printf("enter the value of x");
    scanf("%d",&x);
    y=x;
    while(y)
    {
        y=y/10;
        n++;
    }
    for(y=x;y;y=y/10)
    {
        r=y%10;
        for(i=1,p=1;i<=n;i++)
        p=p*r;
        
        sum=sum+p;

    }
    if(sum==x)
    printf("%d is  a armstrong no.",x);
    else
    printf("%d not a armstrong no.",x);
    return 0;
}

