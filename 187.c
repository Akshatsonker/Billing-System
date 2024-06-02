//print first n prime no. error h
#include<stdio.h>
int main()
{
 int n,a[n],p,i,k=0,r,t=0;
 printf("enter the value of n");
 scanf("%d",&n); 
 for(p=1; ;p++)
 {
    for(i=2 ;i<=p  ;i++)
    {
      if(p%i==0)
      k++;
    }
    if(k==1)
    {
      for(r=0;r<n;r++)
      {00
      scanf("%d",&a[r]);
      t++;
      }
    }
    if(t==n)
    {
      break;
    }
 }
 for(r=0;r<n;r++)
 {
   printf("%d",a[r]);
 }
 return 0;

}
