// star pattern
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
        if(j<=x+1-i)
        printf("*");
        else
        printf(" ");
    }
    printf("\n");
    }
    printf("\n");
    return 0;
}