//find the sum of all the subarrays 
#include<iostream>
using namespace std;
int main()
{
    int n, sum=0,s;
    cin>>n;
    //cin>>s;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n; j++ )
        {
            sum+=arr[j];
            cout<<sum<<"\n";

        }
        sum=0;
    }
}
