#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a,b;
	cin>>a;
	b=5*(a-32)/9;
	cout<<fixed<<setprecision(5)<<b<<endl;
	return 0;
}