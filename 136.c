#include<stdio.h>
int main()
{
    int n,i,j,k,a=1,b=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        k=i;
        for(j=1 ; j<=i ; j++)
        {
            if(k%2==1&&k!=0)
            {
            printf(" %d",a);
            }
            if(k%2==0&&k!=0)
            {
            printf(" %d",b);
            }
          k=k-1;  
         }
        printf("\n");
     }
    return 0;
}