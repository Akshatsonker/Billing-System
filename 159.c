//two dimensional array
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,c[3][3],k;
    printf("enter values for 1 array");
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the value array 2");
    
       for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
            c[i][j]=0;
            for(k=0 ;k<=2 ; k++)
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ;j<=2 ; j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}