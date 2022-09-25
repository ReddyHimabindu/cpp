#include<iostream>
#include<climits>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  n,m,d;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    cin>>m;
    int mn=INT_MAX;
    for(int i=0;i+m-1<n;i++)
    {
        int d= a[i+m-1]-a[i];
        mn=min(d,mn);
        //cout<<endl<<mn;
    }
    cout<<endl<<mn;




    
}