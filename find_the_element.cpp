#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ele;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    } 
    cin>>ele;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            cout<<"At index"<<i;
        }
    } 
}
