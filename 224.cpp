//operator overloading and friend function assignment
#include<iostream.h>
using namespace std;
struct complex
{
    private:
    int a,b;
    public:
    int x,y;
    {
      a=x;
      b=y;
    }
    friend complex operator+(complex);
    friend complex operator-(complex);
    friend complex operator*(complex);
}
complex operator+(complex c)
{
    struct complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
complex operator-(complex c)
{
    struct complex temp;
    temp.a=a-c.a;
    temp.b=b-c.b;
    return temp;
}
complex operator*(complex c)
{
    struct complex temp;
    temp.a=a*c.a-b*c.b;
    temp.b=a*c.b+b*c.a;
    return temp;
}
struct class time
{
 
}