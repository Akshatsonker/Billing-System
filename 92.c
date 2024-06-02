// to count digits in a given number
#include<stdio.h>
int main()
{
    int n,i=0;
    printf("enter the value of n");
    scanf("%d",&n);
   while (n!=0)
   {
    n=n/10;
    i++;
   }
    printf("digits in a number is %d",i);
    return 0;

}