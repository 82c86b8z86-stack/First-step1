#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	double x,y;
	x=a-c;
	y=b-d;
	double l2=x*x+y*y;
	double l= sqrt(l2);
	cout<<fixed<<setprecision(3)<<l<<endl;
	return 0;
}