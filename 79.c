// star pattern with 4 hor. and 5 vert.
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1 ; i<=4 ; i++)
    {
        for(j=1 ; j<=5 ; j++)
        printf("*");
        printf("\n");
    }
    printf("\n");
    return 0;
}