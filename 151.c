//find greatest number using array
#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter 10 numbers");
    for(i=0 ; i<=9 ; i++)
    scanf("%d",&a[i]);
    for(i=0 ; i<=9 ; i++)
    {
    if(a[0]>>a[1]&&a[2]&&a[3]&&a[4]&&a[5]&&a[6]&&a[7]&&a[8]&&a[9])
    {
    printf("greatest number is %d",a[0]);
    break;
    }
    else if(a[1]>>a[0]&&a[2]&&a[3]&&a[4]&&a[5]&&a[6]&&a[7]&&a[8]&&a[9])
    {
        printf(" greatest number is %d",a[1]);
        break;
    }
    else if(a[2]>>a[0]&&a[1]&&a[3]&&a[4]&&a[5]&&a[6]&&a[7]&&a[8]&&a[9])
    {
        printf("greatest number is %d",a[2]);
        break;
    }
    else if(a[3]>>a[0]&&a[1]&&a[2]&&a[7]&&a[4]&&a[5]&&a[6]&&a[8]&&a[9])
    {
        printf("greatest number is %d",a[3]);
        break;
    }
    else if(a[4]>>a[0]&&a[1]&&a[2]&&a[3]&&a[5]&&a[6]&&a[7]&&a[8]&&a[9])
    {
        printf("greatest number is %d",a[4]);
        break;
    }
    else if(a[5]>>a[0]&&a[1]&&a[2]&&a[3]&&a[4]&&a[6]&&a[7]&&a[8]&&a[9])
    {
        printf("greatest number is %d",a[5]);
        break;
    }
    else if(a[6]>>a[0]&&a[1]&&a[2]&&a[3]&&a[4]&&a[5]&&a[7]&&a[8]&&a[9])
    {
        printf("greatest number is %d",a[6]);
        break;
    }
    else if(a[7]>>a[0]&&a[1]&&a[2]&&a[3]&&a[4]&&a[5]&&a[6]&&a[8]&&a[9])
    {
        printf("greatest number is %d",a[7]);
        break ;
    }
    else if(a[8]>>a[0]&&a[1]>>a[2]&&a[3]&&a[4]&&a[5]&&a[6]&&a[7]&&a[9])
    {
        printf("greatest number is %d",a[8]);
        break;
    }
    else if(a[9]>>a[0]&&a[1]&&a[2]&&a[3]&&a[4]&&a[5]&&a[6]&&a[7]&&a[8])
    {
        printf("greatest number is %d",a[9]);
        break;
    }
    }
    return 0;
    }