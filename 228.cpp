//rotete matrix by 90
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    cout<<"enter array"<<endl;
    for(int i=0 ; i<3 ;i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
     for(int i=0 ; i<3 ;i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cout<<arr[2-j][i];
        }
        cout<<endl;
    }
    return 0;
}