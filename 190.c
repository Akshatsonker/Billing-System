//reverse an array error h

#include<stdio.h>
int main()
{
    int n,a[n],i,j;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter array numbers");
    for(i=0 ; i<n ; i++)
    scanf("%d",&a[i]);
    for(i=0 ; i<n ; i++)
        {
            a[i]=a[n-1-i];
    }
    for(i=0 ; i<n ; i++)
    printf("%d",a[i]);
    return 0;
}

