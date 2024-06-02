// pattern  of rectangle  or square genealised way
#include<stdio.h>
int main()
{
    int i,j,x;
    printf("enter the value of x");
    scanf("%d",&x);
    for(i=1 ; i<=x ; i++)
    {
        for(j=1 ; j<=x ; j++)
        {
            if(i==1 || j==1 || i==x || j==x )
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}