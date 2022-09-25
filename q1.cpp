// find the max till the ith term 

/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
        }
    }
    cout<<mx;
}*/

//*********************or**************************


#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    cin>>n;
    int mx= INT_MIN;
    //cout<<mx;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0 ; i<n ; i++)
    {
        mx = max(mx,arr[i]);
        cout<<i+1<<"th term max is : "<<mx<<"\n";

    }
}