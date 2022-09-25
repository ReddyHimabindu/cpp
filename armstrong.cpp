#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,len_no,count=0,am_no=0;

    cin>>n;
    int org_no=n;
    int a=n;
    while(a>0){
        a=a/10;
        count++;
    }
    //cout<<count;
    cout<<n;
    while(n>0)
    {
        int last_digit=n%10;
        am_no+=pow(last_digit,count);
        n=n/10;
    }
    if (am_no==org_no)
    {
        cout<<"armstrong";
    }
    else
    {

        cout<<"not as";
    }
}