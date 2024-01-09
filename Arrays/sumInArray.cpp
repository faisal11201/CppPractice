#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int* arr = new int[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter "<<i<<"th element"<<endl;
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum of element of array is: "<<sum<<endl;
    delete[] arr;
    return 0;
}
