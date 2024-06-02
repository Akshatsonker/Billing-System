 //error h 
#include<iostream>
using namespace std;
class print
{
    private:
    float r;
    public:
    void getradius();
    void setradius(float );
    void circumference(float);
    void area(float);
};
    void print::getradius()
    {
        cout<<"enter radius";
        cin>>r>>;
    }
    void print::setradius(float p)
    {
        p=r;
    }
    void print::circumference(float c)
    {
        c=2*3.14*p;
        cout<<"circumference is "<<c;
    }
    void print::area(float a)
    {
        a=3.14*p*p;
        cout<<"area is"<<a;
    }
int main()
{
    print p1;
    p1.getradius();
    p1.setradius();
    p1.circumference();
    p1.area();
    return 0;
}