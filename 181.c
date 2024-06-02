#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c;
    char ch;
    clrscr();
    printf("enter the value of a");
    scanf("%f\n",&a);
    printf("enter the choice of operation");
    scanf("%c\n",&ch);
    printf("enter the value of b");
    scanf("%f",&b);
    switch(ch)
    {
        case'+':
        c=a+b;
        printf("%f",c);
        break;
        case'-':
        c=a-b;
        printf("%f",c);
        break;
        case'*':
        c=a*b;
        printf("%f",c);
        break;
        case'/':
        c=a/b;
        printf("%f",c);
        break;
        default:
        printf("invalid choice");
        break;
    }
    //return 0;
    getch();
}

    