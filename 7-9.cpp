#include<iostream>
using namespace std;
const int family[8]={111111111,11111111,1111111,111111,11111,1111,111,11};

int main()
{
	long long n;
	cin>>n;
	int d2,d3,d4,d5,d6,d7,d8,d9=0;
	int d[8]={0,0,0,0,0,0,0,0};
	long long remain=1;
	int mark=0;
	if(n<10)
	{
		cout<<"No"<<endl;
		return 0;
	}
	else
	{
		if(n>111111111)
		{
			d[0]=n/family[0];
			remain=n-d[0]*family[0];
		}
		else
		{
			for(int i=1;i<8;i++)
			{
				if(d[0]>0&&mark==0)
				{
					d[i]=remain/family[i];
					remain-=d[i]*family[i];
					mark++;
				}
				else
				{
					if(remain==0)
					{
						cout<<"Yes"<<endl;
						return 0;
					}
					d[i]=n/family[i];
					if(d[i]>0)
					{
						remain=n-d[i]*family[i];
					}
					else{
						cout<<"No"<<endl;
						return 0;
					}
				}
			}
		}
	}
	long long sum=0;
	for(int i=0;i<8;i++)
	{
		sum+=d[i]*family[i];
	}
	if(sum==n)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	return 0;
}