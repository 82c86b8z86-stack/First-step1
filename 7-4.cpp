#include<iostream>
using namespace std;

int main()
{
	int A[10];
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	int ans=0;
	for(int i=0;i<N;i++)
	{
		if(A[i]%2!=0)
		{
			ans+=A[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}