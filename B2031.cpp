#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	double s=fabs((x1-x2)*(y1-y3)-(x2-x3)*(y1-y2));
	cout<<fixed<<setprecision(2)<<s/2<<endl;
	return 0;
}