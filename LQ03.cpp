#include<string>
#include<iostream>
using namespace std;

int main()
{
	string	T;
	cin>>T;
	int pos=0,left1=0,right1=0;
	for(char c:T)
	{
		if(c=='L'||c=='?')
		{
			pos--;
		}
		else if(c=='R')
		{
			pos++;
		}
		left1=min(left1,pos);
		right1=max(right1,pos);
	}
	int ans1=right1-left1+1;
	pos=0;                              //!!!one cannot be declare twice
	int left2=0,right2=0;
	for(char c:T)
	{
		if(c=='R'||c=='?')
		{
			pos++;
		}
		else if(c=='L')
		{
			pos--;
		}
		right2=max(right2,pos);
		left2=min(left2,pos);
	}
	int ans2=right2-left2+1;
	cout<<max(ans1,ans2)<<endl;
	return 0;
}