//reverse a string
#include<stdio.h>
#include<string.h>
void f1()
{
    char str[20],ch;
    int l,i;
    printf("enter string");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    l=strlen(str);
    for(i=0 ; i<l/2; i++)
   {
    ch=str[i];
    str[i]=str[l-1-i];
    str[l-1-i]=ch;
   }
   printf("reverse string is =%s",str);
}
int main()
{
    void f1();
    printf("\n");
    return 0;
}