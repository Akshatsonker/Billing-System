// lcm of two no. 
#include<stdio.h>
int main()
{
    int a,b,l;
    printf("enter the value of a,b");
    scanf("%d %d",&a,&b);
    for(l=1; l<=a*b ; l++)
        if(l%a==0&&l%b==0)
        break;
        printf("lcm is %d",l);
    
    return 0;
}