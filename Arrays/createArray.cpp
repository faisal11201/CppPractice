// Input size: 5
// Output Array: 1 3 5 4 2

// Input size: 9
// Output Array: 1 3 5 7 9 8 6 4 2

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int* arr = new int[n];
    int incr,decr=0;
    if(n%2!=0)
    {
        incr = n/2 + 1;
        decr = n - incr;
    }
    else
    {
        incr = n/2;
        decr = n - incr;
    }
    for(int i=0;i<incr;i++)
    {
        arr[i] = 2*i + 1;
    }
    for(int i=0;i<decr;i++)
    {
        arr[n-1-i] = 2*i + 2;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // 2nd Method using 2 pointer approach
    int element = 1;
    int pointerA = 0;
    int pointerB = n - 1;
    while (pointerA<pointerB)
    {
        arr[pointerA++] = element++;
        arr[pointerB--] = element++;
    }
    if(n & 1) // for odd middle element
    {
        arr[pointerA] = element;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    