 //print complex no.
 #include<iostream>
 using namespace std;
 class complex 
 {
    public :
    int a,b;
    void print(int,int);
    void display();
 };
 void complex::print(int i,int r)
 {
    a=i;
    b=r;
 } 
 void complex::display()
 {
    cout<<a<<"+"<<b<<"i";
 }
 int main()
 {
    complex c1;
  c1.print(12,7);
  c1.display();
  cout<<endl;
  return 0;
 }