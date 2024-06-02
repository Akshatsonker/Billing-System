
//linear search
#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50},item,i=0;
    printf("enter item");
    scanf("%d",&item);

   for(i=0 ; i<5 ; i++)
   {
    if (a[i]==item)
    {
    printf("item found   location=%d",i);
    break;
    }
   }
   if(i>=5)
   printf("item not found");
   return 0;
}