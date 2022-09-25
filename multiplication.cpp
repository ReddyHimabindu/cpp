#include<iostream>
using namespace std;
int main()
{
    int m,n,r;
    cin>>n>>m>>r;
    int a1[n][m],a2[m][r];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a1[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<r;j++)
        {
            cin>>a2[i][j];
        }
    }
    int ans[n][r];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<r;j++)
        {
            ans[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<r;j++)
        {
            for(int k=0;k<m;k++)
            {
                ans[i][j]+=a1[i][k]*a2[k][j];
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


}