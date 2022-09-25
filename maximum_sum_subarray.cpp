#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n, sum=0;
    cin>>n;
    int a[n];
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            //cout<<sum<<endl;
            mx=max(mx,sum);
        }
        
        sum=0;
        
            
    }
    cout<<mx;
    
}