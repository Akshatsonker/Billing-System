// switch case menu program
#include<stdio.h>
int main()
{
    int marks;;
    printf("enter the value of marks");
    scanf("%d",&marks);
    switch(marks)
    {
        case 91 ... 100:
        printf("grade A");    
        break;
        case 81 ... 90:
        printf("grade B");
        break ;
        case 71 ... 80:
        printf("grade C");
        break;
        case 61 ... 70:
        printf("grade D");
        break;
        case 51 ... 60:
        printf("grade E");
        break;
        case 1 ... 50:
        printf("Fail");
        break; 
    }
    printf("\ninvalid marks");
    return 0;

}
