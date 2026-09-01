#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a,b,c,d,q;
	cin>>a>>b>>c>>d;
	q=(c*d-a*b)/(double)(d-b);
	cout<<fixed<<setprecision(2)<<q<<endl;
	return 0;
}
//ruduce uncommanded info
//keep right order of a/b
//using double to insure precision of 2 .00