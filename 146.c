// recursion of decimal to binary
#include<stdio.h>
void print(int);
int main()
{
    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    print(a);
    return 0;
}
void print(int n)
{
    int x=0,y=1;
    while(n!=0)
    {
        if(n%2==0)
        {
        print(n/2);
        printf("%d ",x);
        }
        if(n%2==1)
        {
        print(n/2);
        printf("%d ",y);
        }
    }
}