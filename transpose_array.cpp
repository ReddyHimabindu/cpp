#include<iostream>
using namespace std;
int main()
{
    int n,m,temp;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
                    temp=a[i][j];
                    a[i][j]=a[j][i];
                    a[j][i]=temp;
            
        }
        cout<<"\n";
    }*/
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[j][i]<<"\t";
        }
        cout<<"\n";
    }


}