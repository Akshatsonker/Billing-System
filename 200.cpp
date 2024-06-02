//error h
#include<iostream>
using namespace std;
void lcm(int,int,int);
void swap(int ,int);
int main()
{
    //int x,y,z;
    //printf("enter no.");
    //scanf("%d %d %d",&x,&y,&z);
    //lcm(x,y,z);
    int a[5]={2,4,6,8,0},b[5]={1,3,5,7,9};
    swap(a,b);
}
void swap(int x[],int y[])
{
    int temp,i;
    for(i=0 ; i<5 ; i++)
    {
        temp=x[i];
        x[i]=y[i];
        y[i]=temp;
    }
    for(i=0 ; i<5 ; i++)
    cout<<x[i]201.c;
}



void lcm(int a,int b,int c)
{
    int i,j,k;
    j=a*b*c;
    k=a>b&&a>c?a:b>c?b:c;
    for(i=k ; i<=j ; i++)
    {
        if(i%a==0&&i%b==0&&i%c==0)
        break;
    }
        printf("%d ",i);
    
}
