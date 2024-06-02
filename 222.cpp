//making friend function
#include<iostream>
using namespace std;
class item//random name liya hai
{
    private:
    int a,b;

    public:
    void setdata(int x,int y) { a=x;b=y;}
    void showdata(){
        cout<<"a="<<a<<"b="<<b; 
    }
    item operator+(item,item);
    friend void f1(item);//isko khi bhi define kro chahe private ya protected m
    friend istream operator>>(istream &din,item &i);//input k liyr direct
    friend ostream operator<<(ostream&,item);
};
istream operator>>(istream &din,item &i)
{
    din>>i.a>>i.b;
    return din;
}
ostream& operator<<(ostream &dout,item i)
{
    dout<<"a="<<a<<"b="<<b;
    return dout;
}
item operator +(item x,item y)
{
    item temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
    return temp;
}
void f1(item i)
{
   int c=i.a+i.b;
   cout<<"sum is "<<c;
}
int main()
{
    item i1,i2,i3;
    cout<<"enter an item";
    cin>>i1;
    cout<<i1;
    i1.setdata(3,5);
    i2.setdata(9,3);
    i3=i1+i2;//operator +call hua uske andr i1,i2 as argument paas hue ,i3 m assign hua  
    i3.showdata();
    f1(i1);
    cout<<endl;
    return 0;
}
item item::operator+(int k)  //agar argument ki jagah direct value denge toh kaisa fxn banana padega
{
    item temp;
    temp.a=a+k;//
    temp.b=b;
    return temp;
}