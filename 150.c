//sum of all even and odd no. in array 0f 10
#include<stdio.h>
int main()
{
    int a[10],sum=0,add=0,i;
    printf("enter 10 numbers");
    for(i=0 ; i<=9 ; i++)
    scanf("%d",&a[i]);
    for(i=0 ; i<=9 ; i++)
    {
        if(a[i]%2==0)
        sum=sum+a[i];
        else
        add=add+a[i];
    }
    printf("sum of even numbers are %d",sum);
    printf("   addition of odd numbers are %d",add);
    return 0;
}