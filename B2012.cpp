#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a,b,c,d;
	cin>>a>>b;
	c=b/a;
	d=c*100;
	cout<<fixed<<setprecision(3)<<d<<"%"<<endl;
	return 0;
}