// lower , upper , special , digits using switch case
#include<stdio.h>
int main()
{
    char n;
    printf("enter the value of n");
    scanf("%c",&n);
    switch(n)
    {
    case 65 ... 90:
    printf("uppercase alphabet\n");
    break;
    case 97 ... 122:
    printf("lowercase alphabet\n");
    break;
    case 48 ... 57:
    printf("digits\n");
    break;
    default:
    printf("special characters");
    break;
}
return 0;
}