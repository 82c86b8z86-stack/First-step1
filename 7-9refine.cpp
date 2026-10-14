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
	if(n<10)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	else
	{
		if(n>111111111)
		{
			d[0]=n/family[0];
			remain=n-d[0]*family[0];
			if(remain==0)
			{
				cout<<"YES"<<endl;
				return 0;
			}
		}
		else
		{
			if(remain==1)
			{
				remain=n;
			}
			for(int i=1;i<8;i++)
			{
				d[i]=remain/family[i];
				remain-=d[i]*family[i];
				if(remain==0)
				{
					cout<<"YES"<<endl;
					return 0;
				}
				if(d[i]==0&&remain>family[i])
				{
					cout<<"NO"<<endl;
					return 0;
				}
			}
		}
    }
    cout<<"YES"<<endl;
    return 0;
}