// find the the min index value of repeating elements

#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>> a[i];
    }
    const int N= 1e6+2;
    int idx[N];
    for(int i=0;i<N;i++) 
    {
        idx[i]=-1;

    }
    int minx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[a[i]] !=-1)
        {
            minx=min(minx,idx[a[i]]);
        }
        else
        {
            idx[a[i]]=i;
        }

    }
    cout<<minx+1<<endl;
    

}
