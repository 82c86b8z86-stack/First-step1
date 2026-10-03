#include<iostream>
using namespace std;

int main()
{
	int a,b=0;
	cin>>a;
	if(a==0)
	{
		b=0;
	}
	if(a>0)
	{
		b=1;
	}
	if(a<0)
	{
		b=2;
	}
	switch(b)
	{
		case 0:cout<<"zero"<<endl;break;
		case 1:cout<<"positive"<<endl;break;
		case 2:cout<<"negative"<<endl;break;
	}
	return 0;
}