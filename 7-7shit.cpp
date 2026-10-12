#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long n,k;
	cin>>n>>k;
	long long A[n],B[n]={0};
	for(int i=0;i<n;i++)
	{
		B[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
    long long mark=*max_element(B,B+n);
	long long *player1,*player2;
	player1=&A[0];
	player2=&A[1];
	long long mark01=0;
	long long mark02=1;
	long long index;
	while(mark!=k)
	{
		if(mark01>n-1||mark02>n-1)
		{
			if(mark01>mark02)
			{
				if(mark02!=0)
				{
					mark01=0;
					player1=&A[0];
				}
				else
				{
					mark01=1;
					player1=&A[1];
				}
			}
			else
			{
					if(mark01!=0)
				{
					mark02=0;
					player2=&A[0];
				}
				else
				{
					mark02=1;
					player2=&A[1];
				}
			}
		}
		if(*player1>*player2)
		{
			if(mark01-mark02!=1)
			{
				player2+=1;
			    long long *p=find(A,A+n,*player1);
			    if(p!=A+n)
			    {
				index=p-A;
			    }
			    B[index-1]++;
			    mark02+=1;
			}
			else
			{
				player2+=2;
			    long long *p=find(A,A+n,*player1);
			    if(p!=A+n)
			    {
				index=p-A;
			    }
			    B[index-1]++;
				mark02+=2;
				
			}
		}
		else
		{
			if(mark02-mark01!=1)
			{
				player1+=1;
			    long long *p=find(A,A+n,*player2);
			    if(p!=A+n)
			    {
				index=p-A;
			    }
			    B[index-1]++;
			    mark01+=1;
			}
			else
			{
				player1+=2;
			    long long *p=find(A,A+n,*player2);
			    if(p!=A+n)
			    {
				index=p-A;
			    }
			    B[index-1]++;
				mark01+=2;
		    }
		}
		long long mark=*max_element(B,B+n);
	}
	long long *pp=find(B,B+n,mark);
	long long indexx=pp-B;
	cout<<A[indexx]<<endl;
	return 0;
}