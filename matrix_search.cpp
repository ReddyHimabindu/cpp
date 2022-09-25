#include<iostream>
using namespace std;
int main()
{
    int n,m,targ;
    int flag=0;
    cin>>n>>m>>targ;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int i=0 , j=m-1;
    while( i<n && j>=0)
        {
            if(a[i][j]==targ)
            {
                flag=1;
                cout<<a[i][j];
                
            }
            if (a[i][j]>targ)
            {
                j--;
            }
            else 
                i++;
        //cout<<a[i][j];
        }
     
    if(flag==1)
    {
        cout<<" is ther in matrix";
    }
    else
    {
        cout<<"  is not  found";
    }
}