// checking no. is positive ,negative ,zero
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("positive %d",n);
    }
    if(n==0)
    {
        printf("zero %d",n);
    }
    if(n<0)
    {
        printf("negative %d",n);
    }    
    
    return 0;
}