// pattern 
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1 ; i<=4 ; i++)
    {
        for(j=1 ; j<=7 ; j++)
        {
            if(j>=i && j<9-i)

            printf("%c",j-i+1+64);
            else 
            printf(" ");

        }
        printf("\n");
    }
      return 0;
}