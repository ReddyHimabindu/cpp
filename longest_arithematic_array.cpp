#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pd=arr[0]-arr[1];
    int curr=2;  // taking 2 because we are starting from then 2nd element
    int ans=2;   // till no the max length array is 2 thats why
    for(int i=2;i<n;i++)
    {
        if(pd==arr[i]-arr[i-1])
        {
            curr++;
            
        }
        else{
            pd = arr[i]-arr[i-1];
        }
        ans=max(ans,curr);
    }
    cout<<ans<<endl;
}