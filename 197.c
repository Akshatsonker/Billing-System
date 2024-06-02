#include<stdio.h>
int main()
{
    int a[5],i,j,temp,count=0,p,q;
    //printf("enter n");
    //anf("%d",&n);
    printf("enter arrays");
    for(i=0 ; i<5 ; i++)
    scanf("%d",&a[i]);
    for(i=0 ; i<5 ; i++)
    {
        for(j=i+1 ; j<5 ; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    p=0,q=1;
    while(p<=3)
    {
        printf("%d",a[p]);
        while(a[p]==a[q])
        q++;
        printf("- %d\n",q-p);
        p=q;
        q=q+1;
    }
    return 0;
}