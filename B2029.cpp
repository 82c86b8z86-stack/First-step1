#include<iostream>
using namespace std;

int main()
{
	int h,r;
	cin>>h>>r;
	double V=3.14*r*r*h*0.001;
	int n=20/V +1;
	cout<<n<<endl;
	return 0;
}