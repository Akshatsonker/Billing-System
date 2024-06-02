//TSRS EVEN OR ODD  
#include<stdio.h>
int call(int);
int main()
{
    int n,k;
    printf("enter the value of n");
    scanf("%d",&n);
    k=call(n);
    printf("%d",k);
    return 0;
}
int call(int a)
{
    int b=1,c=0;
    if(a%2==0)
    return b;
    else
    return c;
}