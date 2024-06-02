//class test result
#include<iostream>
using namespace std;
class testresult
{
    private:
    int roll_no,right,wrong,net_score,right_weightage,wrong_weightage;
    public:
    void setdata(int,int,int,int,int,int);
    void getdata();
};
void testresult::setdata(int x,int y,int z,int p,int q,int r)
{
 roll_no=x;
 right=y;
 wrong=z;
 net_score=p;
 right_weightage=q;
 wrong_weightage=r;
}
void testresult::getdata() 
{
    cout<<"roll_no.  "<<roll_no<<"\n";
    cout<<"right  "<<right<<"\n";
    cout<<"wrong  "<<wrong<<"\n";
    cout<<"net score  "<<net_score<<"\n";
    cout<<"right weightage  "<<right_weightage<<"\n";
    cout<<"wrong weightage  "<<wrong_weightage<<"\n";
} 
int main()
{
    testresult c1;
    c1.setdata(99,10,5,30,66,33);
    c1.getdata();
    cout<<endl;
    return 0;
}