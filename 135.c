// TSRS LCM
#include<stdio.h>
int call(int,int);
int main()
{
    int k,x,y;
    printf("enter the valueof x,y");
    scanf("%d %d",&x,&y);
    k=call(x,y);
    printf("lcm is %d",k);
    return 0;
}
int call(int a,int b)
{
 int l;
 for(l=a||b ; l<=a*b ; l++)
 if(l%a==0&&l%b==0)
 return l;

}