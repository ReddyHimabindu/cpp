#include<iostream>
#include<climits>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int total_no_break_days=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1]&&a[i]>mx)
        {
            total_no_break_days++;
            mx=max(total_no_break_days,a[i]);
        }
    }
    cout<<total_no_break_days<<"\n";

}
