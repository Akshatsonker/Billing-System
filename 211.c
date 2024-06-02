//frequency of each element in string
#include<stdio.h>
int main()
{
    char str[100],c;
    int i,count=0;
    printf("enter string");
    gets(str);
    for(c='a' ; c<='z' ; c++)
    {
        count=0;
        for(i=0 ; str[i] ; i++)
        {
            if(c==str[i])
            count++;
        }
        if(count>0)
        printf("%c - %d\n",c,count);
    }
    return 0;
}