//print sum of n natural no. 
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0 ; i<=n ; i++)
    {
        s=s+i;
    }
    printf("%d",s);
return 0;
}
