#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int a[100005] = {0};     
    for (int i = 0; i < n; i++) 
	{
        cin >> a[i];
    }
    sort(a, a + n);
    
    int b[100005] = {0};     
    int cnt = 0;             
    
    int i = 0;
    while (i < n) 
	{
        int j = i;
        while (j < n && a[j] == a[i])
		{ 
            j++;
        }
        b[cnt] = j - i;     
        cnt++;               
        i = j;                
    }
    
    int max = b[0];      
    for (int i = 1; i < cnt; i++)
	{
        if (b[i] > max) 
		{
            max = b[i];
        }
    }
    
    cout << n - max << endl;
    return 0;
}