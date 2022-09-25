#include<iostream>
using namespace std;
int main()
{
    int n,key,a;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\nenter the key value\t";
    cin>>key;
    int flage=0;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            flage=1;
            a=i;
        }

    }
    if(flage==1)
    {
        cout<<"found at  "<<a+1<<"  position\n";
    }
    else
    {
        cout<<"not found\n";
    }
}