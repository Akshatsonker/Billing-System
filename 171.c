// swap 2 strings   error h
#include<stdio.h>
#include<string.h>
void swap(char,char);
int main()
{
    char str[20],name[20];
    printf("enter strings");
    gets(str);
    gets(name);
    swap(str,name);
    return 0;
 }
 void swap(char a,char b)
 {
    char c;
    c=a;
    a=b;
    b=c;
    printf("%s  %s",a,b);
 }
