//pattern  error hai
#include<stdio.h>
int main()
{
    int j,i;
    for(i=1 ; i<=4 ; i++)
    {
        for(j=1 ; j<=i ; j--)
        {
    printf("%d",j); 
        }
        printf("\n");
    }
    return 0;
}