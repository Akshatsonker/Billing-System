//length of string
#include<stdio.h>
#include<string.h>
//ab last function ke liye
int give_me_last_character_of_string(char []);


int main()
{
    char ch,str[20];
    int i;
    printf("enter the name");
    fgets(str,20,stdin);
    //for(i=0 ; str[i];i++)ye bhi use kr skte h

    str[strlen(str)-1]='\0';
    for(i=0 ; str[i] ; i++);
    printf("length of string %s is %d",str,i);
    //abhi tk length ka program tha but aage last character through function ka  program hai
    ch=give_me_last_character_of_string(str);
    printf("%c",ch);
    printf("\n");
    return 0;
}
int give_me_last_character_of_string(char s[])
{
    return s[strlen(s)-1];
}