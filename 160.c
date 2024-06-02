// print  length of string but print before space
#include<stdio.h>
int main()
{
  char str[20];
  int i;
  printf("enter your name");
  scanf("%s",str);
  for(i=0 ;str[i];i++);
  printf("%d",i);
  printf("\n");
  return 0;
}