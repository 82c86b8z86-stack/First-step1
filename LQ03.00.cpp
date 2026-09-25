#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N;
	cin>>N;
	vector<int>A(N);
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<N;i++)
	{
		int pos=i+1;
		if(pos%2!=A[i]%2)
		{
			cout<<-1<<endl;
			return 0;
		}
    }
    vector<int> odd,even;
    for(int i=0;i<N;i++)
    {
    	if(A[i]%2!=0)
    	{
    		odd.push_back(A[i]); 
		}
		else
		{
			even.push_back(A[i]); 
		}
	}
	int n1=odd.size() ;
	int n2=even.size() ;
	int ans=0;
	for(int i=0;i<n1;i++)
	{
		for(int j=i+1;j<n1;j++)
		{
			if(odd[i]>odd[j])
			{
				ans++;
			}
		}
	}
	for(int i=0;i<n2;i++)
	{
		for(int j=i+1;j<n2;j++)
		{
			if(even[i]>even[j])
			{
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}