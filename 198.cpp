#include<iostream>
int highest(int);
int main()
{

    int n,h ;
    printf("enter the number");
    scanf("%d",&n);
    h=highest(n);
    printf("%d",h);
    return 0;
}
int highest(int n)
{
    int a,max;
    a=n%10;
    n=n/10;
    max=a;
    while(n!=0)
    {
        if(max<n%10)
        max=n%10;
        n=n/10;
    }
    return max;
}