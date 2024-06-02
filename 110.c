// lcm with apna pattern
#include<stdio.h>
int main()
{
    int i=2,flag=0,l=1,a,b;
    printf("enter the value of a,b");
    scanf("%d %d",&a,&b);
    while(a>1||b>1)
    {
        if(a%i==0)
        {
        a=a/i;
        flag=1;
        }
        
        if(b%i==0)
        {
            b=b/i;
            flag=1;
        }
        
        if(flag==1)
        {
        l=l*i;
        flag=0;
        }
        else
        i++;
    }
    printf("Lcm is %d",l);
    return 0;
}

