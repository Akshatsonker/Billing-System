//binary search
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={10,20,30,40,50},item,mid,lr=0,up=4,f=0;
    printf("enter item");
    scanf("%d",&item);
    while(lr<=up)
    {
        mid=(lr+up)/2;
        if(a[mid]==item)
        {
            f=1;
            break;
        }
        if(a[mid]<item)
        lr=mid+1;
        else
        up=mid-1;
    }
    if(f==1)
    printf("item found with location %d",mid);
    else
    printf("not found");
    return 0;
}