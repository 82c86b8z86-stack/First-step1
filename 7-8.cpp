#include<iostream>
using namespace std;

int main()
{
	int step_n,num_m;
	cin>>step_n>>num_m;
	if(step_n<num_m)
	{
		cout<<"No"<<endl;
		return 0;
	}
	if(step_n==num_m)
	{
		cout<<"Yes"<<endl;
	}
	if(step_n>num_m)
	{
		int real_step=step_n-num_m;
		int s=step_n-real_step;
		if(s%2!=0)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
	return 0;
}