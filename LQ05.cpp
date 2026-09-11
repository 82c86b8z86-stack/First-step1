#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long N,i,j;
	cin>>N>>i>>j;
	long long k=min({j,i,N+1-i,N+1-j}); // pos in k floor  !!using {} to contain multiple num
	long long inner=N-2*(k-1);  // inner is the length of inside circle
	long long before=N*N-inner*inner; // before is the sum of outside circle
	long long side=N-k*2+2;
	long long offset=0;
	if(i==k)// upside
	{
		offset=j-k;
	}
	else if(j==N+1-k)//right side
	{
		offset=side-1+i-k;
	}
	else if(i==N-k+1)//down side
	{
		offset=2*(side-1)+N-k+1-j;
	}
	else
	{
		offset=3*(side-1)+N-k+1-i;
	}
	long long ans=before+offset+1;// before + changed length + itself(1)
	cout<<ans<<endl;
	return 0;
}