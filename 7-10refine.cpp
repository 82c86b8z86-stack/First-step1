#include<iostream>
using namespace std;

int main()
{
	int n,num1,num2,num3,ch1,ch2,ch3;
	cin>>n;
	num1=n*18;
	num2=21*n;
	num3=25*n;
	if(num1%60!=0)
	{
		ch1=num1/60+1;
	}
	else
	{
		ch1=num1/60;
	}
	if(num2%60!=0)
	{
		ch2=num2/60+1;
	}
	else
	{
		ch2=num2/60;
	}
	if(num3%60!=0)
	{
		ch3=num3/60+1;
	}
	else
	{
		ch3=num3/60;
	}
	int ans=ch1+ch2+ch3;
	if(n==1)
	{
		ans=2;
	}
	cout<<ans;
	return 0;
}