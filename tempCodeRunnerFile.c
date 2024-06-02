#include<stdio.h>
int main()
{
    int n,a[n],i,j,temp;
    printf("enter n");
    scanf("%d",&n);
    printf("enter arrays");
    for(i=0 ; i<=(n-1) ; i++)
    scanf("%d",&a[i]);
    for(i=0 ; i<=(n-1) ; i++)
    {
        for(j=i+1 ; j<=(n-1) ; j++)