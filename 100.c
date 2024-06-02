// find next prime no. of a given no.    error hai abhi
#include<stdio.h>
int main()
{
    int n,i=0,count,x;
    printf("enter the value of n");
    scanf("%d",&n);
    while(i>0)
    {
    i=n++;

    {
    for(x=2 ; x<=i ; x++)
    
        count=0;
        if(i%x==0)
        count++;
    }
    { if(count==1)
    printf("next prime number is %d",i);
    }
    break;
    }
    return 0;

} 