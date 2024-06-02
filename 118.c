// given term is in fibonacci series ??
#include<stdio.h>
int main()
{
    int x,a=-1,b=1,c,i;
    printf("enter the value of x");
    scanf("%d",&x);
    for(i=0 ;    ; i++)
    {
        c=a+b;
        if(c==x)
        {
            printf("%d is in fibonacci series",x);
            break;
        }
        if(c>x)
        {
        printf("%d is not in series",x);
        break;
            }
        a=b;
        b=c;
    }
    return 0;
}