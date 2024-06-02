//handling multiple strings assighment    run time pe error aa skte hai laken code shi hai
#include<stdio.h>
#include<string.h>
void input(char s[][20],int n)
{
    int i;
    printf("enter %d strings",n);
    for(i=0 ; i<n ; i++)
    {
        fgets(s[i],20,stdin);
        s[i][strlen(s[i])-1]='\0';
    }
}
    void f2()
{
    int i;
    char str[5][20];
    input(str,5);
    for(i=0 ; i<=4 ; i++)
    printf("%s | vowels = %d",str[i],vowel_count(str[i]));
    printf("\n");
    return 0;
}
int vowel_count(char str[])
{
    char v[]="aeiouAEIOU";
    int i,j,count=0;
    for(i=0 ; str[i] ; i++)
    for(j=0 ; v[j] ; j++)
    if(str[i]==v[j])
    {
        count++;
        break;
    }
    return count;
}
void f3()
{
   int i;
   char city[10][20];
   input(city,10);
   for(i=0 ; i<10 ; i++)
   printf("%s\n",city[i]);
   sort(city,10);
   for(i=0 ; i<=9 ; i++)
   printf("\n%s",city[i]);   
}
void sort(char city[][20],int n)//bubble sort
{
    int r,i;
    char temp[20];
    for(r=1 ; r<n ; r++)
    {
        for(i=0 ; i<=n-1-r ; i++)
        {
            if(strcmp(city[i],city[i+1])>0)
            {
                strcpy(temp,city[i]);
                strcpy(city[i],city[i+1]);
                strcpy(city[i+1],temp);
            }
        }
    }
    
}
int main()
{
   char s1[]="pear",s2[]="reap";
   if(is_anagram(s1,s2))
   printf("anagram");
   else
   printf("not anagram");
   printf("\n");
  return 0;
}
int count_words(char str[])
{
  int i,count=0;
  trim(str);
  for(i=0 ; str[i]; i++)
  {
    if(str[i]==' ')
    {
        if(str[i]==str[i+1])
        continue;
        else
        count++;
    }
  }
  return count+1;
}
void f4()
{
    char str[]="mysirg education services private limited";
    char w[5][20];
    string_to_words(str,w);
    printf("%s\n",w[i]);
}
void string_to_words(char str[]char w[][20])
{
    int wcount,i,j,k;
    wcount=count_words(str);
    for(i=0 ; j=0;k=0;str[i];i++;k++)
    {
        if(str[i]!=' ')
        w[j][k]=str[i];
        else
        {
            if(w[j][k-1]!=ch)
              w[j][0]='/0';
              else
            w[j][k]='\0';
            j++;
            k=-1;
        }
    }
    
    if(w[j][k-1]!=ch)
       w[j][0]='\0';
       else
        w[j][k]='\0';
}
char* trim(char str[])
{
    int i=0,j,k,count=0;
    for(k=strlen(str)-1;str[k]==' ';k--)
    count++;
    k=strlen(str);
    while(str[i]==' ')
    i++;
    for(j=0;str[j+1];j++)
    str[j]=str[i+j];
    str[k-count-i]='\0';
    return str;
}
void f5()
{
    int i;
    char names[][20]={
        "amit",
        "akshat",
        "sonker",
        "sothudu",
        "akshat",
        "sonker", 
        "akshat"
    };
    remove_duplicate(names,7);
    for(i=0 ; i<=6 ; i++)
    printf("%s\n",names[i]);
}
void remove_duplicate(char names[][20],int n)
{
    int i;
    sort(names,n);
    for(i=n-2;i>=0;i--)
    {
        if(strcmp(names[i],names[i+1])==0)
        names[i+1][0]='\0';
    }
        sort(names,n);
}

void f6()
{
     char str[]="mysirg education services private limited";
    char w[5][20];
    int i;
    string_to_words(str,w);
    printf("%s\n",w[i]);
}
void f7()
{
      char names[][20]={
        "amit",
        "akshat",
        "sonker",
        "sothudu",
        "akshat",
        "sonker", 
        "akshat"
    };
    char ch;
    ch=max_freq_character(names,7);
    printf("max frequency character=%c",ch);
}
char max_freq_character(char str[][20],int n)
{
    int f[128]={0};
    int i,j,max,maxindex;
    for(i=0 ; i<n;i++)
    {
        for(j=0;str[i][j];j++)
        f[str[i][j]]++;
    }
    max=f[0];
    maxindex=0;
    for(i=1;i<=127;i++)
    if(max<f[i])
    {
        max=f[i];
        maxindex=i;
    }
    return maxindex;
}
char* sorting(char s[])
{
    int i,r;
    char t;
    for(r=1;r<=strlen(s)-1;r++)
    {
        for(i=0;i<=strlen(s)-1-r;i++)
        {
            if(s[i]>s[i+1])
            {
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }
    }
}
int is_anagram(char s1[],char s2[])
{
    return strcmp(sorting(s1),sorting(s2))==0;
}