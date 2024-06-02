// checking nature of roots
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter the value of a,b,c");
  scanf("%d %d %d",&a,&b,&c);
  if(b*b>4*a*c)  
{ 
    printf("real and distinct roots");
}   
   if(b*b==4*a*c)
{
    printf("real and equal roots");
}
if(b*b<4*a*c)
{
    printf("imaginary roots");
}
return 0;
}