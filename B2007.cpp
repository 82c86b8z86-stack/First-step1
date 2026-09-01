#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b;
	c=a+b;
	cout<<c<<endl;
	while(c>=0)
	{
		cin>>a>>b;
		c=a+b;
		cout<<c<<endl;
	}
	return 0;
}