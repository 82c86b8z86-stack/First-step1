#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    long long max_val = 0;
    for (int i = 0; i < n; i++)
	{
        cin >> a[i];
        max_val = max(max_val, a[i]);
    }
    long long cur = a[0];
    long long win_count = 0;
    
    for (int i = 1; i < n; i++) {
        if (a[i] > cur)
		{
            cur = a[i];
            win_count = 1;
        } else
		{
            win_count++;
        }
        if (win_count >= k)
		{
            cout << cur << endl;
            return 0;
        }
        if (cur == max_val) 
		{
            cout << cur << endl;
            return 0;
        }
    }
    cout << max_val << endl;
    return 0;
}