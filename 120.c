// leap year or not
//2000 2400 2800 3200....    leap year
//2012 2016 2020 2024....    leap year
//2100 2300 2500 2700....    non leap year
#include<stdio.h>
int main()
{
    int year;
    printf("enter the value of year");
    scanf("%d",&year);
    if(year%400==0 || year%4==0 && year%100!=0)
    printf("leap year");
    else
    printf("non leap year");
    return 0;
}
