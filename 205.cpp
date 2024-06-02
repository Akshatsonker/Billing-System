//adding two complex no.
#include<iostream>
using namespace std;
class complex 
{
    private :
    int a,b;//instance member variable
    public :
    void setdata(int,int);
    void showdata();
    complex add(complex);
};
void complex::setdata(int x,int y)
{
    a=x;
    b=y;
}
void complex::showdata()
{
    cout<<"\na="<<a<<" b="<<b;
}
complex complex::add(complex c)
{
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1.add(c2);// *** c1 function n apne add fxn ko call kiya ,c2 as argument and temp in c3. 
    c3.showdata();
    cout<<endl;
    return 0; 
}