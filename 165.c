// length of string by utube
#include<string.h>
int main()
{
    int count=0;
    char name[20];
    printf("enter name");
    gets(name);
    count=strlen(name);
    printf("%d",count);
    return 0;
} 