// menu program
#include<stdio.h>
int main()
{
int n,a,fac=1,radius,N,sum=0,i,b;
float area;
printf("\n1. factorial of given number");
printf("\n2. check even or odd");
printf("\n3. area of circle");
printf("\n4. sum of first n natural number");
printf("\n5. exit");
printf("\nenter the value of number");
scanf("%d",&n);
switch(n)
{
    case(1):
    {
    printf("enter the value of a");
    scanf("%d",&a);
    for(i=1 ; i<=a ; i++)
    fac=fac*i;
    printf("%d",fac);
    }
    break;
    case(2):
    {
    printf("enter the value of b");
    scanf("%d",&b);
    if(b%2==0)
    printf("even");
    else
    printf("odd");
    }
    break;
    case(3):
    {
    printf("enter the radius");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    printf("%f",area);
    }
    break;
    case(4):
    {
    printf("enter the value of N");
    scanf("%d",&N);
    for(i=1 ; i<=N ; i++)
    sum=sum+i;
    printf("%d",sum);
    }

    break;
    case(5):
    printf("Exit");
    break;
}
printf("\ninvalid");
return 0;


}