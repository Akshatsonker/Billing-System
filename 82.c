//print even natural no. sum upto  n
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0 ; i<=2*n ; i++)
    {
        if(i%2==0)
        {
     s=s+i;
        }

    }
     printf("%d",s);
    return 0;
     }