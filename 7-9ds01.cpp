#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    for (long long b=0;b*111<=n;b++)
    {
        long long remain=n-b*111;
        if (remain % 11 == 0) 
		{
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}