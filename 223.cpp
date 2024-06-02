//operator overloading assignment
#include<iostream>
using namespace std;
#define ARRAY_INDEX_OUT_OF_BOUND;
class complex
{
private:
int a,b;
public:
void setdata(int x,int y)
{
    a=x;
    b=y;
}
void showdata()
{
    cout<<"a="<<a<<"b="<<b;
}
complex operator+(complex c) //same as - k liye
{
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
complex operator*(complex c)
{
    int temp;
    temp.a=a*c.a-b*c.b;
    temp.b=b*c.a+a*c.b;
    return temp;
}
bool operator==(complex c)
{
    if(a==c.a&&b==c.b)
    returnn true;
    else
    return false;
}
};
class time
{
    private:
    int hour,min,sec;
    public:
    void settime(int x,int y,int z)
    {
        hour=x;
        min=y;
        sec=z;
    }
    void showtime()
    {
        cout<<hour:<<min:<<sec;
    }
    bool operator>(time t)
    {
        if(hour>t.hour)
        return true;
        else if(hour<t.hour)
        return false;
        else if(min>t.min)
        return true;
        else if(min<t.min)
        return false;
        else if(sec>t.sec)
        return true;
        else
        return false;
    }
time operator++() //pre-increment
{
    sec++;
    min=min+sec/60;
    sec=sec%60;
    hour=hour+min/60;
    min=min%60;
    return *this;
}
time operator++(int) //post-increment
{
    time temp=*this;
    sec++;
    min=min+sec/60;
    sec=sec%60;
    hour=hour+min/60;
    min=min%60;
    return temp;
}
};
class matrix
{
    private:
    int M[3][3];
    public:
    void setdata()
    {
        cout<<"enter 9 no. of matrix";
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            cin>>m[i][j];
        }
    }
     void printmatrix()
    {
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                cout<<M[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    matrix operator+(matrix X)
    {
       matrix temp;
       for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                temp.M[i][j]=M[i][j]+X.M[i][j]; //same as - k liye
            }
        }
         return temp;
    }
    matrix operator*(matrix X)
    {
        matrix temp;
        int s; 
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
             s=s+M[i][k]*X.M[k][j];  
            }
            temp.M[i][j]=s;
        }
        return temp;
    }
    class numbers
    {
       int x,y,z; //default ye private member hai
       public:
        number operator-()
        {
            number temp;
            temp.x=-x;
            temp.y=-y;
            temp.z=-z;
            return temp;
        }
    };
    class fraction
    {
        private:
        long numerator;
        long denominator;
        public:
        fraction(long n=0,long d=0)
        {
            numerator=n;
            denominator=d;
        }
        fraction operator+(fraction f)
        {
            fraction temp;
            long L=lcm(denominator,f.denominator);
            temp.numerator=numerator*(L/denominator)+f.numerator*(L/denominator)
            temp.denomminator=L;
            return temp;
        }
        long lcm(int x,int y)
        {
            int L;
            if(L=x>y?x:y;L<=x*y;L++)
            return L;
        }
    bool operator<(fraction f)
    {
        return numerator*f.denominator<f.denominator*numerator;
    } 
    };
    class array //ye DSA ka hai
    {
        int *p;
        int size;
        public:
        array(int s)
        {
            size=s;
            p=new int[s];
        }
        ~array()
        {
            delete []p;
        }
        int& operator[](int index)
        {
            if(index>=size)
            {
                cout<<"array index out of bound";
                throw ARRAY_INDEX_OUT_OF_BOUND;//iska matlab samaj nhi aaya
            }
            return p[index]; //reference return kra rh h
        }
    }; 