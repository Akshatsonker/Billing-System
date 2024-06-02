//assignment 26 structure
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee
{
    private:
    int id;
    char name[20];
    float salary;
};
struct employee inputemployee()
{
    struct employee e;
    printf("enter id , name , salary");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name;20;stdin);
    e.name[strlen(e.name)-1]='\0';//for null character
    scanf("%f",&e.salary);
    return e;
}
void displayemployee(struct employee e)
{
    printf("\n%d %s %f",e.id,e.name,e.salary);
}
struct employee highestsalaryemployee(struct employee e[],int n)
{
    struct employee emp;
    emp=e[0];
    for(int i=1;i<=9;i++)
    if(emp.salary<s[i].salary)
    emp=e[i];
    return emp;
}
struct employee indexhighestsalary(struct employee e[],int n)
{
    struct employee emp;
    int i,index=0;
    for(i=1;i<=n;i++)
    if(emp.salary<e.salary)
    {
        emp=e[i];
        index=i;
    }
    return index;
}
void sortbysalary(struct employee e[],int n)
{
    struct employee temp;
    int i,index;
    for(i=n-1;i>0;i--)
    {
        index=indexhighestsalaryemployee(e,i+1);
        temp=e[i];
        e[i]=e[index];
        e[index]=temp;
    }
}
void sortbyname(struct employee e[],int n)
{
    int r,i;
    struct employee temp;
    for(r=1 ; r<n ; r++)
    {
        for(i=0 ; i<=n-1-r ; i++)
        {
            if(strcmp(e[i].name,e[i+1].name)>0)
            {
                temp=e[i];
                e[i]=e[i+1];
                e[i+1]=temp;
            }
        }
    }
}
struct time 
{
    int hr,min,sec;
}
struct time difference(struct time t1,struct time t2)
{
    struct time temp;
    int seconds=abs((t1.hr*3600+t1.min*60+t1.sec)-(t2.hr*3600+t2.min*60+t2.sec));
    temp.hr=seconds/3600;
    seconds=seconds%3600;
    temp.min=seconds/60;
    temp.sec=seconds%60;
    return temp;
}
struct student
{
    int id;
    char name[20];
}
struct student inputstudent()
{
    struct student s;
    printf("enter student id and name");
    scanf("%d",&s.id);
    fflush(stdin);
    fgets(s.name,20,stdin);
    s.name[strlen(s.name)-1]='\0';
    return s;
}
void display(struct student s)
{
    printf("\n %d %s ",s.id,s.name);
}
void inputstudent(struct student s[],int n)
{
    int i;
    for(i=0 ; i<n ; i++)
    {
        s[i]=inputstudent();
    }
}
void displaystudent(struct student s[],int n)
{
    int i;
    for(i=0 ; i<n ; i++)
    display(s[i]);
}
