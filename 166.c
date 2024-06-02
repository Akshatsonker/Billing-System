//count of vowels
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,n=0;
    printf("enter str");
    gets(str);
    for(i=0 ;i<strlen(str);i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        n++;
    }
    printf("%d",n);


    return 0;
}