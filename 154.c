//permutation  shi h and combination galat hai
#include<stdio.h>
int combi(int ,int, int);
int permu(int , int);
int main()
{
    int n,r,f=1,t=1,c,m=1,k,g;
    printf("enter the value of n,r");
    scanf("%d %d",&n,&r);
    while(n)
    {
        f=f*n;
        n=n-1;
    }
    while(r)
    {
        t=t*r;
        r=r-1;
    }
    c=n-r;
    while(c)
    {
        m=m*c;
        c=c-1;
    }
    k=combi(f,t,m);
    printf("%d\n",k);
    g=permu(f,t);
    printf("%d\n",g);
    return 0;

}
int combi(int a,int b,int d)
{
    int e;
    e=a/b/d;
    return e;
}
int permu(int z,int x)
{
    int v;
    v=z/x;
    return v;
}