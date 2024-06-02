//count of space
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i;
    printf("enter the name");
    for(i=0 ;str[i] ; i++)
    {
     scanf("%s",str[i]);
    }
    for(i=0 ; str[i];i++)
    str[i]=str[i]-32;
    printf("%s",str[i]);
    
    return 0;
}