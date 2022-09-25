#include<iostream>
using namespace std;
int binary_search(int arr[], int n, int key)
    {
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid= (low+high)/2;
            //cout<<arr[mid];
            if(arr[mid]==key)
            {
                return mid;
            }
            else if (arr[mid]<key)
            {
                low=mid+1;
            }
            else if(arr[mid]>key)
            {
                high=mid-1;
            }

        }
        return -1;

    }
int main()
{
    int n,key;
    cin>>n>>key;
    int arr[n];
    
    for (int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

    cout<<"\n"<<binary_search(arr,n,key);
    
    
    
}