// print first n odd natural no. 
#include<stdio.h>
int main()
{
   int i=1,n;
   printf("enter the value of n");
   scanf("%d",&n);
   while(i<=2*n)
   {
    if(i%2==1)
    printf("%d  ",i);
    i++;
   } 
   return 0;
}