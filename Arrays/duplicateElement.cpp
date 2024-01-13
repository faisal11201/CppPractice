#include<iostream>
using namespace std;

int duplicate(int *arr, int size)
{
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            if(arr[i]==arr[j] && i!=j){
                return arr[i];
            }
        }
    }
    return -1;
}
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
    cout<<"Duplicate element is: "<<duplicate(arr,size)<<endl;
    delete[] arr;
    return 0;
}