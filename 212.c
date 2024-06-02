//find a word in a string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[]="akshat sonker hero";
    char p[]="hero";
    int i,j,k;
    k=strlen(p[]);
    for(i=0 ; str[i] ; i++)
    {
        for(j=0 ; j<=k ; j++)
        {
            if(p[j]==str[i])
            {
                i++;
            }
        }
    }
} 