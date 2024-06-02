//to find greatest no.
#include<stdio.h>
int main()
{
    int a[5],i ,max;
    printf("enter 5 numbers");
    for(i=0 ; i<=4 ; i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=1 ; i<=4 ; i++)
    if(max<a[i])
    max=a[i];
    printf("%d",max);
    return 0;
}