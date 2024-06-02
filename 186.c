//sort employee acc. to their salary error h
#include<stdio.h>
struct employee
{
    float salary[10];

};
int main()
{
struct employee p1;
float k,j,temp;
printf ("enter  salary");
for(k=0 ; k<=9 ; k++)
{
scanf("%f",&p1.salary[k]);
}
for(k=0 ; k<=9 ; k++)
{
    for(j=k+1 ; j<=9 ; j++)
    {
     if(salary[k]<salary[j])
     {
        temp=salary[k];
        salary[k]=salary[j];
        salary[j]=temp;
     }
    }
}
for(k=0 ; k<=9 ; k++)

{
printf("%f",p1.salary[k]);
}
return 0;
}