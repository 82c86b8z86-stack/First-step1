#include<stdio.h>
#include<iostream>
using namespace std;
int power(int a,int n)
{
	int ans;
	if(n==0)
	{
		ans=1;
	}
	else
	{
		ans=power(a*a,n/2);
		if(n%2==1)
		{
			ans*=a;
		}
	}
	return ans;
}
int main()
{
	int a,n,b;
	cout<<"input a&n to culculate a^n";
	cin>>a>>n;
	b=power(a,n);
	cout<<b<<endl;
	return 0;
}