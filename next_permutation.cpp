//https://www.youtube.com/watch?v=TOvWyFT0xCw
#include<iostream>
#include<climits>
#include<bits/stdc++.h>
// The following header needs to be included to use std::reverse()
#include <algorithm>
// The following header needs to be included to use std::begin() and std::end()
#include <iterator>


using namespace std;
int main()
{
    int n,idx=-1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=n-1;i>0;i--)
    {
        if(a[i]>a[i-1])
        {
            idx=i;
            break;
        }
        
    }cout<<idx<<endl;
    if(idx==-1)
    {
        reverse(a, a+n);
        for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    }
    else
    {
        int prev=idx;
        for(int i=idx+1;i<n;i++)
        {
            if(a[idx-1]<a[i] and a[prev]>=a[i])
            {
                prev=i;
            }
        }cout<<prev;
        swap(a[idx-1],a[prev]);
        reverse(a+idx,a+n);
        for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    }
    
    
}