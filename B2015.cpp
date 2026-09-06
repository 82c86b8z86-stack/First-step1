#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main()
{
	double r1,r2,r,R;
	cin>>r1>>r2;
	r=1/r1+1/r2;
	R=1/r;
	cout<<fixed<<setprecision(2)<<R<<endl;
	return 0;
}