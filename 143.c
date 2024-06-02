//print natural no. in reverse order
#include<stdio.h>
void print(int);
int main()
{
    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    print(a);
    printf("\n");
    return 0;
}
void print(int n)
{
    if (n>=1)
    {
        printf("%d ",n);
        print(n-1);
    }
}