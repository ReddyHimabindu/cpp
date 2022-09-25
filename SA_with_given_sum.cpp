#include<iostream>
using namespace std;
int main()
{
    int n, sum=0,s;
    cin>>n;
    cin>>s;
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
            //cout<<j<<endl;
            if (sum==s)
            {
                cout<<i<<"\t"<<j;
                break;
            }
            //cout<<sum<<"\n";

        }
        if (sum==s)
            {
                //cout<<i<<"\t"<<j;
                break;
            }
        sum=0;
    }
}