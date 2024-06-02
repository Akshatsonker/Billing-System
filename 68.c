// print a table of 5 upto n
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("5*%d = %d",i,i*5);
        printf("\n");
         i++;
    }
    return 0;
}