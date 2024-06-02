#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        printf("enter the value of j ");
        scanf("%d",&j);
        if(j/2*2==j)
            break;
    }
    if(i==4)
    printf("game over");
    else
    printf("you win");
    return 0;   
}