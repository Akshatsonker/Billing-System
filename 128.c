//TSRS AREA
#include<stdio.h>
float area(int);
int main()
{
    int r=5;
    float k;
    k=area(r);
    printf("area is %f",k);
    return 0;
}
float area(int a)
{
    float c;
    c=3.14*a*a;
    return c;
}