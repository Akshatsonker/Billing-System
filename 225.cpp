//sort 
#include<iostream>
using namespace std;
int main()
{
    int arr[9]={0,2,2,1,0,1,1,0,2},i=0,j=8;
    while(i!=j)
    {
        if(arr[i]==0&&arr[j]==2)
        {
            i++,j--;
        }
        if(arr[i]==2&&arr[j]==1)
        {
           swap(arr[i],arr[j]);
           i++,j--; 
        }
        if(arr[i]==2&&arr[j]==1)
        {
            swap(arr[i],arr[j]);
            j--;
        }
        if(arr[i]==arr[j])
        {
            j--;
        }
        if(arr[i]==1&&arr[j]==0)
        {
          swap(arr[i],arr[j]);  
        }
    }
    for(i=0 ; i<9 ; i++)
    {
    cout<<arr[i]<<endl;
    }
    return 0;
}