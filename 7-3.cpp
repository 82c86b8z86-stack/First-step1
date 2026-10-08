#include<iostream>
using namespace std;

int main()
{
	float num;
	cin>>num;
	float full=num*10;
	int A=full/1000;
	float remain=full-A*1000;
	int B=remain/100;
	remain-=B*100;
	int C=remain/10;
	remain-=C*10;
	float ans=(1000*remain+100*C+10*B+A)/1000;
	cout<<ans<<endl;
	return 0;
}