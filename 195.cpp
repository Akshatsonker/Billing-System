//structure from c to c++
#include<iostream>
#include<string.h>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
struct book inputbook();
void displaybook(struct book );
int main()
{
    struct book b1={1,"drilling in c",245.89},b2;
    struct book b3;
    b2.bookid=2;
    strcpy(b2.title,"hello world");
    b2.price=350.0;
    b3=inputbook();
    displaybook(b3);
}
void displaybook(struct book b)
{
    cout<<b.bookid<<" "<<b.price<<" "<<b.price<<endl;
}
struct book inputbook()
{
    struct book b;
    cout<<"enter bookid,title,price";
    cin>>b.bookid;
    cin.ignore();
    cin.getline(b.title,20);
    cin>>b.price;
    return b;


}
