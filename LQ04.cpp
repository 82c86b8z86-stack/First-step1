#include<string>
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<2<<endl;
		return 0;
	}
	if(n==2)
	{
		cout<<4<<endl;
		return 0;
	}
	long long a[35]={0};  // view from the last term to judge demand
	long long b[35]={0};
	a[2]=2; // a mark last two char is same
	b[2]=2; //b mark last two char is different
	for(int i=3;i<=n;i++)
	{
		a[i]=b[i-1];
		b[i]=b[i-1]+a[i-1];
	}
	cout<<a[n]+b[n]<<endl;
	return 0;
}