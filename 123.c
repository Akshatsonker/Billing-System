// TSRS basic
#include<stdio.h>
int main()
{
    a();
    b();
    a();
}
a()
{
    printf("hello");
}
b()
{
    printf("bye");
    a();
}
