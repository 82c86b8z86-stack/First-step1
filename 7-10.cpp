#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum=(18+21+25)*n;
	int ans=0;
	if(sum%60!=0)
	{
		ans=sum/60+1;
	}
	else
	{
		ans=sum/60;
	}
	cout<<ans;
	return 0;
}