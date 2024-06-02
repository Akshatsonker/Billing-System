//structure  
#include<stdio.h>
#include<string.h>
struct employee 
{
 int id; 
 char title[20];
 float salary;
};
int main()
{
struct employee b1;
printf("enter id,title,salary");
scanf("%d",&b1.id);
//fgets(b1.title,20,stdin);
scanf("%s",&b1.title);
scanf("%f",&b1.salary);
printf("%d %s %f",b1.id,b1.title,b1.salary);
return 0;
}



