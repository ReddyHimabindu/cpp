#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flage=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime\n";
            flage=1;
            break;
        }


    }
    if(flage==0)
    {
        cout<<"prime\n";

    }
}
