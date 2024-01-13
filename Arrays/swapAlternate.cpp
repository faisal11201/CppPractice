#include<iostream>
using namespace std;

void swapAlternate(int* arr, int n)
{
    int i = 0;
    int temp;
    while(i<=n-2)
    {
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        i+=2;
    }
}
int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    swapAlternate(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    return 0;
}
