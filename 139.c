// print100 no.
#include<stdio.h>
void print(int);
int  main()
{
  int a;
  printf("enter the value of a");
  scanf("%d",&a);
  print(a);
  printf("\n");
  return 0;
}
void print(int n)
{
    if(n>0)
    {
        print(n-1);
        printf("%d ",n);
}
}