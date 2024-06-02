#include<stdio.h>
int main()
{
    int a[5]={1,2,3,2,1},i,n1,n2,temp;
    printf("enter the value of n1 , n2");
    scanf("%d %d ",&n1,&n2);
    temp=a[n1-1];
    a[n1-1]=a[n2-1];
    a[n2-1]=temp;
  for(i=0 ; i<=4 ; i++)
    {
    printf("%d ",a[i]);
    }    
    
return 0;
}