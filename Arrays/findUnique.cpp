#include<iostream>
using namespace std;

int findUnique(int* arr, int n)
{
    // Brute Force
    for(int i=0;i<n;i++)
    {
        int j = 0;
        while(j<n)
        {
            if (i!=j && arr[i]==arr[j])
            {
                break; // it means we have find duplicate element
            }
            j++;
        }
        if(j==n)
        {
            return arr[i];
        }
    }
    return -1;
    // Optimised approach
    // int ans=0;
    // for(int i=0;i<n;i++)
    // {
    //     ans^=arr[i];
    // }
    // return ans;
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
    cout<<"Unique element is: "<<findUnique(arr,size)<<endl;

}