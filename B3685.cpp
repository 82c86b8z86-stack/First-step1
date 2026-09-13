#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int n,a,b,c;
	cin>>n;
	a=n/100+(n-(n/100)*100)/10+(n-((n/100)*100)-((n-(n/100)*100)/10)*10);
	b=a*a;
	c=b*a;
	cout<<a<<endl<<b<<endl<<c<<endl;
	return 0;
}