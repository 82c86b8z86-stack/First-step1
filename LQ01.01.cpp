#include<iostream>
using namespace std;

int main()
{
	long long N,K,n;
	cin>>N>>K;
	n=(N+K-1)/K;   //!!!!!!!! to avoid int outcome ,it can simplify in using if grammar
	cout<<n<<endl;
	return 0;
}