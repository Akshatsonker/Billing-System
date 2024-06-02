//for time printing
#include<iostream>
using namespace std;
class time
{
    private :
    int a,b,c;
    public:
    void settime(int,int,int);
    void showtime();
    void normalize();//iska bhi matlab nhi pata
    time add(time);
    bool is_greater(time);//f*n ka matlab nhi pata;
};
void time::settime(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}
void time::showtime()
{
    cout<<a<<b<<c;
}
time time::add(time t)
{
    time temp;
    temp.a=a+t.a;
    temp.b=b+t.b;
    temp.c=c+t.c;
    return temp;
}
int main()
{
    time c1,c2,c3;
    c1.settime(3,5,7);
    c2.settime(1,4,8);
    c3=c1.add(c2);
    c3.showtime();
    cout<<endl;
    return 0;
}


