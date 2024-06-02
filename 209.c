//assignment of strings
#include<stdio.h>
#include<string.h>
int is_palindrone(char str[] )
{
   int i,l;
   l=strlen(str);
   for(i=0 ; i<l/2 ; i++)
   if(str[i]!=str[l-1-i])
   return 0;
   return 1; 
}
void reverse(str)
{
   char temp;
   int i=0,j;
   while(str[i]!='\0'){
   i++;
   }
   for(j=0 ; j<=(i-1)/2 ; j++)
   {
      temp=str[j];
      str[j]=str[i-1-j];
      str[i-1-j]=temp;
   }
   printf("%s",str);
}
int main()
{
   char str[]="akshat";
   reverse(str);
   printf("\n");
   return 0;
}
