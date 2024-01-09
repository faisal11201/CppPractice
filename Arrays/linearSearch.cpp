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
    int elem;
    cout<<"Enter element to find: ";
    cin>>elem;
    bool isPresent=false;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==elem)
        {
            isPresent = true;
            break;
        }
    }
    if(isPresent)
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    
    return 0;
}