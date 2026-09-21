#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int r;
	cin>>r;
	double V = (4*r*r*r*3.14)/3;
	cout<<fixed<<setprecision(5)<<V<<endl;
	return 0;
}