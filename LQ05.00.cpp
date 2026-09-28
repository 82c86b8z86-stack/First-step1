#include<iostream>
#include<vector>
using namespace std;

int main()
{
	long long N,ans=0;
	cin>>N;
	vector<long long>timelist(N);// ! sizeof num sapce
	for(int i=0;i<N;i++)
	{
		cin>>timelist[i];
	}
	for(int i=0;i<N;i++)
	{
		long long standard=timelist[i];
		vector<long long>L(0);
		for(int j=i;j<N;j++)
		{
			int monitor=0;
			L.push_back(timelist[j]); 
			for(int n=1;n<L.size();n++)//do not put standard itself into it 
			{
				if(L[n]>=standard)//!
				{
					monitor++;
				}
			}
			if(monitor>1)
			{
				continue;
			}
			else
			{
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}