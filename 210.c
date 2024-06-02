//count word in a string   tough ques.
#include<stdio.h>
char* remove_extra_space(char *s);
int count_words(char *s);
int main()
{
    char str[100];
    int no_of_words=count_words(str);
    printf("enter string");
    gets(str);
    printf("%d\n",strlen(str));
    strcpy(str,remove_extra_space(str));
    printf("%d\n",strlen(str));
    no_of_words=count_words(str);
    printf("%d\n",no_of_words);
    return 0;
}
int count_words(char *s)
{
  int i=0,count=0;
  while(*(s+i)){
    if(*(s+i)==' ')
    count++;
    i++;
}
return(count+1);//no. of spaces +1 == no. of words 
}
char* remove_extra_space(char *s)//for copying or returning the new string
{
    char *p;
    int i=0,j=0;
    p=malloc(strlen(s)+1);//for characters
    while(*(s+i))
    {
        while(*(s+i)==' ')//ye space ko remove krne k liye hai
        i++;
        while(*(s+i)!=' '&& *(s+i)!='\0')
        {
            *(p+j)=*(s+i);
            i++,j++;
        }
        if(*(s+i)=='\0'&&*(p+j-1)==' ')//ye last space ko remove krne k liye
        j--;
        *(p+j)=*(s+i);
        j++;
    }
    return (p);
}
