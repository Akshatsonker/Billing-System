//print all prime numbers between 0 to 100
#include<stdio.h>
int main()
{
    int i,x;
    for(i=0 ; i<100 ; i++)
    {
        for(x=2 ; x<100 ; x++)
        {
        if(i%x==0)
        break;
        }
        if(i==x)
        printf("  %d",i);

    }
    return 0;
}