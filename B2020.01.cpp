#include<iostream>
using namespace std;

int main()
{
	int a[7]={0};
	for(int i=1;i<=5;i++)
	{
		cin>>a[i];
	}
	a[6]=a[1];
	a[0]=a[5];
	int f[7]={0};
	int n=0;
	for(int i=1;i<=5;i++)
	{
		if(i==5)
		{
			a[5]=a[0]+f[4];
			a[6]=a[1];
		}
		f[i]=a[i]/3;
		a[i-1]+=f[i];
		a[i+1]+=f[i];
		n+=a[i]-3*f[i];
		a[i]=f[i];
		if(i==5)
		{
			a[1]=a[6];
		}
	}
	cout<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<a[5]<<endl;
	cout<<n<<endl;
	return 0;
}