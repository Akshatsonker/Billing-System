//handling multiple string    pata nhi kya error
#include<stdio.h>
#include<string.h>
int main()
{
    char str[3][10];
    int i;
    printf("enter three numbers");
    for(i=0 ; i<=2 ; i++)
    {
    fgets(str[i],10,stdin);
    str[i][strlen(str[i])-1]='\0';
    }
    for(i=0 ; str[i]; i++)
    printf("%s",str);
    return 0;
}