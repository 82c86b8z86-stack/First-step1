#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	long long Q,P,M;
	cin>>Q>>P>>M;
	long long sum1=Q*P;
	vector<long long>num(M);
	vector<long long>price(M);
	for(int i=0;i<M;i++)
	{
		cin>>num[i];
		cin>>price[i];
	}
	vector<long long>sum(M);
	for(int i=0;i<M;i++)
	{
		long long N=Q/num[i];
		long long S=Q-N*num[i];
		long long A1=(N+1)*price[i];
		long long A2=N*price[i]+(Q-N*num[i])*P;
		sum[i]=min(A1,A2);
	}
	long long B1=*max_element(sum.begin(),sum.end());
	long long B2=min(B1,sum1);
	cout<<B2<<endl;
	return 0;
}