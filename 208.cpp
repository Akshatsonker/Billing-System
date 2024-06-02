//matrixs error h
#include<iostream>
using namespace std;
class matrix
{ 
    private:
    int a[3][3],b[3][3];
    public:
    void setdata();
    void add();
    //matrix sub(matrix);
    //matrix multiply(matrix);
    //matrix transpose();
   // bool is_singular();
}
void matrix::setdata()
{
    matrix i,j,p[3][3],q[3][3];
    a[3][3]=p[3][3];
    b[3][3]=q[3][3];
    cout<<"enter matrix a";
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
          cin>>a[i][j];
        }
    }
    cout<<"enter matrix b";
    for(i=0 ; i<=2 ; i++)
    {
        for(j=0 ; j<=2 ; j++)
        {
          cin>>a[i][j];
        }
    }
}
void matrix::add()
{
  matrix c[3][3]=0,n,m;
 for(n=0 ; n<=2 ; n++)
    {
        for(m=0 ; m<=2 ; m++)
        {
          c[n][m]=a[n][m]+b[n][m];
        }
    }
     for(n=0 ; n<=2 ; n++)
    {
        for(m=0 ; m<=2 ; m++)
        {
          cout<<a[n][m]<<"\n";
          cout<<endl;
        }
    }

}
int main()
{
    matrix c1;
    c1.setdata();
    c1.add();
    cout<<endl;
    return 0;
}

