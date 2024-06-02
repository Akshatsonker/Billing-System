//concatenate two strings
#include<stdio.h>
char * concatenate(char s1[],char s2[])
{
    int i,j;
    for(i=0 ; s1[i] ; i++);
    for(j=0 ; s2[j] ; j++)
    s1[i+j]=s2[j];
    s1[i+j]='\0';
    return s1;
}
int main()
{
    char str[]="akshat";
    printf("%s",concatenate(str," sothudu"));
    printf("\n");
    return 0;
}