#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    for (int b = 0; b <= 10; b++) {
        long long remain = n - b * 111;
        if (remain >= 0 && remain % 11 == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}