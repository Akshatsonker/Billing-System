// hcf of  two number       
#include<stdio.h>
int main()
{
    int a,b,h;
    printf("enter the value of a,b");
    scanf("%d %d",&a,&b);
    for(h=(a<b)?b:a ; h>=1 ; h--)
    {
        if(a%h==0&&b%h==0)
        break;
    }
        printf("Hcf is %d",h);
     return 0;
}