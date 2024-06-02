// to find a word  dont know why not running
#include<stdio.h>
int find_word(char str[],char word[])
{
    int i,j,l;
    for(l=0 ; word[l] ; l++)
    for(i=0 ; str[i+l] ; i++)
    {
        for(j=0 ; word[j] ; j++)
        {
            printf("%c %c\n",str[i+j],word[j]);
            if(str[i+j]!=word[j])
            break;
        }
        printf("\n\n");
        if(!word[j])
        if(i==0&&(str[i+l]==' '||str[i+l]=='\0')||str[i-1]==' '&&str[i+l]==' '||str[i+l]=='\0')
        return i;
    }
    return -1;

}
int main()
{
    char str[]="akshat sonker";
    char word[]="sothudu";
    find_word(str,word);
    return 0;
}