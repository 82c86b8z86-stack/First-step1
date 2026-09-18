#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int a[6]={0};
	for(int i=1;i<=5;i++)
	{
		cin>>a[i];
	}
	a[6]=a[1];
	a[0]=a[5];
	int f[6]={0};
	for(int i=0;i<=6;i++)
	{
		f[i]=a[i]/3;
	}
	int b[5]={0};
	for(int i=1;i<=5;i++)
	{
		b[i]=f[i]+f[i-1]+f[i+1];
	}
	int c[5]={0};
	for(int i=1;i<=5;i++)
	{
		c[i]=a[i]-(3*f[i]);
	}
	int n=0;
	for(int i=1;i<=5;i++)
	{
		n+=c[i];
	}
	cout<<b[1]<<" "<<b[2]<<" "<<b[3]<<" "<<b[4]<<" "<<b[5]<<endl;
	cout<<n<<endl;
	return 0;
}