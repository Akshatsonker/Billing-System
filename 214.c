//find a word in a string     doubt hai
#include<iostream>
int find_word(char str[],char word[])
{
    int i,j,l;
    for(l=0 ; word[l];l++)
    for(i=0 ; str[i+l+1] ; i++)
    {
        for(j=0 ; word[j] ; j++)
        {
            if(str[i+j]!=word[j])
            break;
        }
        if(!word[j]&&printf("hello"))
        if(i==0&&(str[i+1+l]==' '||str[i+l+1]=='\0')||str[i-1]==' '&&str[i+l+1]==' '||str[i+l+1]=='\0')
        return i;
    }
    return -1;
}