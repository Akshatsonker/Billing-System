// century year or leap year
#include<stdio.h>
int main()
{
    int year;
    printf("enter the value of year");
    scanf("%d",&year);
    if (year%100!=0)
    {
        //non century year
        if(year%4)
        printf("non leap year");
        else
        printf("leap year");
    }
    else
    //century year
    {
        if(year%400!=0)
        printf("non leap year");
        else
        printf("leap year");
    }
    printf("\n");
    return 0;
}