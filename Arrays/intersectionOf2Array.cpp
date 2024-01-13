#include<iostream>
#include<map>
using namespace std;

// Complexity o(m+n)
void intersection3(int* arr1, int m, int* arr2, int n)
{
    map<int,int> mymap;
    for(int i=0;i<m;i++)
    {
        if(mymap.find(arr1[i])!=mymap.end())
        {
            mymap[arr1[i]]++;
        }
        else
        {
            mymap[arr1[i]] = 1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(mymap.find(arr2[i])!=mymap.end())
        {
            cout<<arr2[i]<<" ";
        }
        if(mymap[arr2[i]]==0)
        {
            mymap.erase(arr2[i]);
        }
    }
}


// Complexity o(mlogn + nlogn)
void intersection1(int* arr1, int m, int* arr2, int n)
{
    sort(arr1,arr1 + m);
    sort(arr2,arr2 + n);
    int i = 0;
    int j = 0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr2[j]<arr1[i])
        {
            j++;
        }
        else
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}
// Brute Force o(m*n)
void intersection(int* arr1,int m, int* arr2, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
                arr2[j] = -1;
                break;
            }
        }
    }
}
int main()
{
    int m;
    cout<<"Enter size of first array: ";
    cin>>m;
    int* arr1 = new int[m];
    for(int i=0;i<m;i++)
    {
        cout<<"Enter "<<i<<"th element"<<endl;
        cin>>arr1[i];
    }
    int n;
    cout<<"Enter size of second array: ";
    cin>>n;
    int* arr2 = new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i<<"th element"<<endl;
        cin>>arr2[i];
    }
    // intersection(arr1,m,arr2,n);
    cout<<endl;
    // intersection1(arr1,m,arr2,n);
    cout<<endl;
    intersection3(arr1,m,arr2,n);
// 2 6 1 2
// 1 2 3 4 2
    delete[] arr1;
    delete[] arr2;
    return 0;
}