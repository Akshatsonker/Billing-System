//to count repeated elements in array   error h
#include<stdio.h>
int main()
{
    int a[10],i,j,n=0;
    printf("enter the array");
    for(i=0 ; i<=9 ; i++)
    scanf("%d",&a[i]);
    for(i=0 ; i<=9 ; i++)
    {
        for(j=0 ; j<=9 ; j++)
        {
            if(a[i]==a[j])
            n++;
        }
        if(n==2)
        printf("%d\n",a[i]);
        
    }
    printf("no repeated ");
    return 0;
}