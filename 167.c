// practice through recursion
#include<stdio.h>
void reverse(int);
int main()
{
    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    reverse(a);
    printf("\n");
    return 0;
}
void reverse(int n)
{
    int i;
    while(n!=0)
    {
    i=n%10;
    n=n/10;
    printf("%d",i);
    }
}