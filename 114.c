// menu driven program
#include<stdio.h>
int main()
{
    int n ; 
    printf("enter the vale of n");
    scanf("%d",&n);
    switch(n)
    {
        case(1):
        printf("good");
        break;
        case(2):
        printf("better");
        break;
        case(3):
        printf("best");
        break;
        default:
        printf("\ninvalid");
    }
    return 0;
    
}