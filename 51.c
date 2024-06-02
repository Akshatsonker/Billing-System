// sp,cp profit/loss
#include<stdio.h>
int main()
{
    int sp,cp,loss,profit;
    printf("enter the value of sp,cp");
    scanf("%d %d",&sp,&cp);
    if(sp>cp)
    {
        printf("profit is %d",(sp-cp)*100/cp);
    }
    else{
        printf("loss is %d",(cp-sp)*100/cp);
    }
    return 0;
}