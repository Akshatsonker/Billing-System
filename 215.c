//to do case insensitive comparisonS   error hai 
#include<stdio.h>
int compare_case_ignore(char,char);
int main()
{
    int a;
    a=compare_case_ignore(char,char);
    return 0;
}
int compare_case_ignore(char s1[],char s2[])
{
    int i;
    for(i=0 ; s1[i];i++) 
    if(s1[i]>='a'&&s1[i]<='z')
    s1[i]-=32;
    for(i=0 ; s2[i];i++)
    if(s2[i]>='a'&&s2[i]<='z')
    s2[i]-=32;
    for(i=0;s1[i]&&s2[i];i++)
    if(s1[i]!=s2[i])
    return 0; //not same
    if(s1[i]==s2[i])
    return 1;//same string
    else
    return 0;
}
