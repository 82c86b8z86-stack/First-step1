#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string toBinary(long long n)
 {
    if (n == 0) return "0";
    string s;
    while (n > 0) 
	{          
        s += char('0' + n % 2);
        n /= 2; 
    }
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
	int n;
	cin>>n;
	long long fiabo[n];
	fiabo[0]=1;
	fiabo[1]=1;
	for(int i=2;i<n;i++)
	{
		fiabo[i]=fiabo[i-1]+fiabo[i-2];
	}
	string s=toBinary(fiabo[n-1]);
	long long ans=0;
	for(char c:s)
	{
		if(c=='0')
		{
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}