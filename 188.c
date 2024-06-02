//remove duplicate no.
 #include<stdio.h>
int main()
{
    int n,a[n],i,j;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0 ; i<n ;i++)
    scanf("%d",&a[i]);
    for(i=n ;i>0;i++)
    {
        for(j=(n-1);j>0;j++)
        {
            if(a[i]==a[j])
            {
                a[i]=0;
            }
        }
    }
    printf("%d",a[i]);
    return 0;
}
