//hcf through recursion by eucled method
#include<stdio.h>
int hcf(int ,int);
int main()
{
    int n,m,k;
    printf("enter n,m");
    scanf("%d %d",&n,&m);
    k=hcf(n,m);
    printf("%d",hcf(n,m));
    return 0;
}
int hcf(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
        return b;
        else
        return hcf(a%b,b); 
    }
    else{
        if(b%a==0)
        return a;
        else
        return hcf(a,b%a);
    }
}