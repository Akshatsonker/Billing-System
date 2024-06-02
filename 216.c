//counting frequency in string
#include<stdio.h>
int main()
{
    char str[]="akshat sonker";
    print_frequency(str);
    return 0;
}
void print_frequency(char str[])
{
    int  f[128]={0},i;
    for(i=0 ; str[i] ; i++)
    f[str[i]]++;
    for(i=0 ; i<=127 ; i++)
    if(f[i]!=0)
    printf("%c-%d\n",i,f[i]);

}