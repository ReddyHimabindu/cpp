#include<iostream>
using namespace std;
int main()
{
    int n,last_digit, reverse=0;
    cin>>n;
    while(n>0)
    {
        last_digit=n%10; // this line is used to fine the last digit of the number  ex = 23  23%10=3
        reverse=reverse*10+last_digit;// then the last digit is saved in the reverse keyword  reverse=0*10+3=3
        n=n/10; //after that we will delete that last number from the the original number by using this line  n=23/10=2.3=2(only int value)
    }
    cout<<reverse;
    
}
