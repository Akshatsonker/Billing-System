//fibonaaci tern  through recursion
#include<stdio.h>
void printfib(int);
int fib(int);

int fib(int n)
{
    if(n==0||n==1)
    return n;
    return fib(n-1)+fib(n-2);
}
void printfib(int n)
{
 if(n==1)
 printf("%d ",n);
 else
 {
    printfib(n-1);
    printf("%d  ",fib(n));
 }
}
int main()
{
    printfib(10);
    printf("\n");
    return 0;
}




    
    

 