// calculate avg. of 100 no. using array
#include<stdio.h>
int main()
{
    int a[100],sum=0,i;
    float avg;
    printf("enter 100 numbers");
    for(i=0 ; i<=99 ; i++)
    scanf("%d ",&a[i]);
    for(i=0 ; i<=99 ; i++)
    sum=sum+a[i];
    avg=sum/100.0;
    printf("average is %d",avg);
    return 0;
}