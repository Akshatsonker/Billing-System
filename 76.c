#include<stdio.h>
int main()
{
 int i,x,s=0;
 printf("enter numbers");
 while(1)
 {
    scanf("%d",&x);
    if(x==0)
    break;
    s=s+x;
 }
 printf("sum is %d",s);
 printf("\n"); 
 return 0;
 }