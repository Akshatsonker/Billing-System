//example of recursion
#include<stdio.h>
void f1();
int main()
{
    f1();
    printf("\n");
    return 0;

}
void f1()
{
    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    if(a>0)
    f1();
    printf("%d ",a);
}