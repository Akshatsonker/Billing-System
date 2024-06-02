//TSRS GIVEN DIGIT IS IN GIVEN NO. OR NOT   error hai
#include<stdio.h>
int call(int,int);
int main()
{
    int a,b;
    char k,j;
    printf("enter the value of a,b ");
    scanf("%d %d",&a,&b);
    k=call(a,b);
    if(b=0)
    printf("yes",k);
    else
    printf("no",j);
    return 0;
}
int call(int p,int q)
{
    int r,s,t;  
    while(q!=0)
    {
    r=q%10;
    if(r==p)
    {
    return s;
    break;
    }
    q=q/10;
    c
    }
    return t;
}