//void selection sort
#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0 ; i<n-1 ; i++){
        int minindex=i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }

}
int main()
{
    int a[5]={"20","62","19","9","16"};
    selectionsort(a[5],5);
    for(int i=0;i<5 ;i++)
    {
        cout<<a[i] <<endl;
    }
    return 0;
}