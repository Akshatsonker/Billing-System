#include<stdio.h>
int main()
{
    int costprice , sellingprice , profit;
    printf("enter the value of costprice and sellingprice");
    scanf("%d %d",&costprice,&sellingprice);
    profit = sellingprice -costprice;
    printf("profit %d %d is %d",costprice,sellingprice,profit);
    return 0;
}