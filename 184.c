//to find maximum element in matrix
#include<stdio.h>
int main()
{
    int n,i,j,a[n][n],max;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of matrix");
    for(i=0 ; i<=(n-1);i++)
    {
        for(j=0 ;j<=(n-1);j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    max=a[0][0];
    for(i=0 ; i<=(n-1);i++)
    {
        for(j=0 ; j<=(n-1);j++)
        {
            if(max<a[i][j])
            {
            max=a[i][j];
        }
        }
    }
    printf("maximum element is %d",max);
    return 0;
}