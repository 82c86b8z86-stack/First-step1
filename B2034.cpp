#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n=0;
	cin>>n;
	long long a=1;
	for(int i=0;i<n;i++)
	{
		a*=2;
	}
	cout<<a<<endl;
	return 0;
}