#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	long long n,k;
	cin>>n>>k;
	vector<long long>fire(n);
	for(int i=0;i<n;i++)
	{
		cin>>fire[i];
	}
	long long player1=fire[0];
	//long long player2=fire[1];
	long long max_fire=0;
	long long win_mark=0;
	for(int i=0;i<n;i++)
	{
		max_fire=max(max_fire,fire[i]);
	}
	for(int i=1;i<n;i++)
	{
		if(fire[i]>player1)
		{
			player1=fire[i];
			win_mark=1;
		}
		else
		{
			win_mark++;
		}
		if(win_mark=k)
		{
			cout<<player1;
			return 0;
		}
		if(player1=max_fire)
		{
			cout<<max_fire;
			return 0;;
		}
    }
		cout<<max_fire;
		return 0;
	}