//initialize constructor
#include<iostream>
using namespace std;
class student //enter student detail type 
{
    private:
    int rollno.;
    string name;
    public:
    student(){
        cout<<"enter roll number: ";
        cin>>rollno.;
        cout<<"enter name";
        cin>>name;
    }
    void showstudent()
    {
        cout<<endl<<rollno."  "<<name;
    }

};

class numbers
{
  private:
  int size;
  int *arr;
  public:
  numbers(int size)
  {
    this->size=size;
    arr=new int(size);
  }
  numbers(numbers &n)
  {
    size=n.size;
    arr=new int[size];
    for(int i=0;i<size;i++)
    arr[i]=n.arr[i];
  }
  ~numbers()
  {
    delete []arr;
  }
};
class complex
{
    private:
    int a,b;
    public:
    complex(int x,int y):a(x),b(y) {}
    void showdata()
    {
        cout<<"\na="<<a<<"\nb="<<b;
    }
};
void example()
{
    complex c[5]={complex(4,6),complex(10,20),complex(3,7),complex(5,2),complex(7,9)};
    for(int i=0;i<=4 ; i++)
    c[i].showdata();

}
class book
{
    private:
    int bookid;
    string title;
    float price;
    public:
    book()
    {

    }
        book(int a,string b,float c):bookid(a),title(b),price(c)//initializers
        {}
}
class time
{
    private:
    int hr,min,sec;
    public:
    time(int x,int y,int z)
    {
        hr=x;
        min=y;
        sec=z;
    }
}
class customer
{
    private:
    int cust_id;
    string name,email,phone no.;
    public:
    customer()//non parametrized constructor
    {
       cust_id=0;
       name="anonymous";
       email="xyz@example.com";
       phone no.="9988776655";
    }
    customer(int a,string x,string y,string z)
    {
        cust_id=a;
        name=x;
        email=y;
        phone no.=z;
    }
};
class cuboid
{
    private:
    int length,breadth,height;
    public:
    cuboid(int x,int y,int z);
    {
        length=x;
        breadth=y;
        height=z;
    }
};
