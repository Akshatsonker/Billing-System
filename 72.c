// print uppercase and lowercase
#include<stdio.h>
int main()
{
    char n;
    printf("enter the character  n");
    scanf("%c",&n);
    if (n>='a'&&n<='z')
    printf("lowercase alphabet");
    else  if(n>='A'&&n<='Z')
    printf("uppercase alphabet");
    else if(n>='0'&&n<='9')
    printf("digit");
    else
    printf("special character");
    printf("\n");
    return 0;
}