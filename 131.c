//TSRN firat n natural no.
#include<stdio.h>
void nat(int);
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    nat(n);
     return 0;
    }
    void nat(int a)
    {
        int i;
        for(i=1 ; i<=2*a ; i++)
        {
            if(i%2==1)
        printf(" %d",i);
        }
    }