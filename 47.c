//even or odd using bitwise operator
#include<stdio.h>
int main()
{
 int n;
 printf("enter the value of n");
 scanf("%d",&n);
 if(n&1==0)
 printf("%d is an even number",n);
 else
 printf("%d is an odd number");
 return 0;
}