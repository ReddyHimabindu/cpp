#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    //*********** METHOD 1 ***************
    /*int max_no=INT_MIN; INT_MIN it will tale the smallest integer value 
    int min_no=INT_MAX;
    for (int i=0;i<n;i++)
    {
        if(max_no<arr[i])
        {
            max_no=arr[i];
        }
        if(min_no>arr[i])
        {
            min_no=arr[i];
        }
    }
    cout<<max_no<<"\n"<<min_no<<"\n";*/
    //************* METHOD 2 ******************
    int max_no=INT_MIN;
    int min_no=INT_MAX;
    for (int i=0;i<n;i++)
    {
        max_no=max(max_no,arr[i]);
        min_no=min(min_no,arr[i]);
    }
    cout<<max_no<<"\n"<<min_no<<"\n";


}
