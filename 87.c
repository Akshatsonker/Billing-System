// prime no. between two no.
#include<stdio.h>
int main()
{
    int a,b,i,x;
    printf("enter the value of a,b");
    scanf("%d %d",&a,&b);
    for(i=a+1 ; i<=b-1 ; i++)
    {
      for(x=2 ; x<b ;  x++)
      { 
        if(i%x==0)
        break;
      }
      if(i==x)
      printf("%d",i);

    }
    return 0;
}