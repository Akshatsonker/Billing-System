 //swap no
 #include<stdio.h>
 int main()
 {
    int a,b,temp;
    printf("enter the value of a,b");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
 }