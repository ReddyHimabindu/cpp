#include<iostream>
using namespace std;
void fac(int n)
{
    int factorial=1;
    for (int i=2;i<=n;i++)
    {
        factorial*=i;
    }
}
int main(){
    int n;
    cin>>n;
    fac(n);
}