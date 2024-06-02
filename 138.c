// addition through recursion
#include<stdio.h>
int sum(int N);
int main()
{ 
    printf("sum of first 5 nummbers is %d",sum(5));
    printf("\n");
    return 0;
}
int sum(int N) 
{

     if(N==1)
    return 1;
    return (N+sum(N-1));
}