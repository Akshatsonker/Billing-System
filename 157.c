//finding 2 greatest no.
#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    //printf("enter the value of n");
  //  scanf("%d",&n);
    printf("enter array values");
    for(i=0 ; i<5 ; i++)
    scanf("%d",&a[i]);
    for(i=0 ;i<5 ; i++)
    {
        for(j=i+1 ; j<5 ; j++)
        {
            if(a[i]>a[j])
            {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
            }
        }
    }
    printf("%d",a[1]);
    return 0;
}