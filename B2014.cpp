#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double r,d,c,s;
	cin>>r;
	d=2*r;
	c=3.14159*d;
	s=3.14159*r*r;
	cout<<fixed<<setprecision(4)<<d<<" "<<c<<" "<<s<<endl;
	return 0;
}