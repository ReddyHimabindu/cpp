#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    const int N= 1e6+2;
    int idx[N];
    for(int i=0;i<N;i++) 
    {
        idx[i]=-1;

    }
    for(int i=0;i<n;i++)
    {
            idx[a[i]]=i;

        if(idx[a[i]] !=-1)
        {
            cout<<"true";
            break;
        }
        else
        {
            cout<<"false";
        }

    }
    //cout<<"true";


} 
