// print sum  of cubes upto n
#include<stdio.h>
int main()
{
int i,n,c=0;
printf("enter the value of n");
scanf("%d",&n);
for(i=0 ; i<=n ; i++)
{ 
    c=c+i*i*i;
}
printf("%d",c);
return 0;
}