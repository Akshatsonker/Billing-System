#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,2,3,3};
        int i,j;
        for(i=0 ; i<5 ; i++)
        {
            for(j=i+1 ; j<5 ; j++)
            {
                if(arr[i]==arr[j])
                cout<<i <<endl;
            }
        }
        return 0;
}