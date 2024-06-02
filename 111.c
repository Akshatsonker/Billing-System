// pattern 
#include<stdio.h>
int main()
{
    int i,j;
    for(i=4 ; i>=1 ; i-- )
    {
        for(j=1 ; j<=7 ; j++)
        {
            if(j>4-i&&j<4+i)
        else
        printf("*");
        printf(" "); 
        }
        printf("\n");
    }
    return 0;
}