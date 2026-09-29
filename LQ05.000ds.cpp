#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<long long> A(N + 1);
    for (int i = 1; i <= N; ++i) cin >> A[i];

    // 稀疏表求区间最大值
    int LOG = 1;
    while ((1 << LOG) <= N) ++LOG;
    vector<vector<long long>> st(LOG, vector<long long>(N + 2));
    for (int i = 1; i <= N; ++i) st[0][i] = A[i];
    for (int k = 1; k < LOG; ++k)
        for (int i = 1; i + (1 << k) - 1 <= N; ++i)
            st[k][i] = max(st[k-1][i], st[k-1][i + (1 << (k-1))]);

    auto query_max = [&](int l, int r) {
        if (l > r) return (long long)-1;
        int k = __lg(r - l + 1);
        return max(st[k][l], st[k][r - (1 << k) + 1]);
    };

    long long ans = 0;
    for (int i = 1; i <= N; ++i) {
        long long base = A[i];

        // 找第一个 >= base 的位置 j1
        int lo = i + 1, hi = N, j1 = N + 1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (query_max(i + 1, mid) >= base) { j1 = mid; hi = mid - 1; }
            else lo = mid + 1;
        }

        // 找第二个 >= base 的位置 j2
        int j2 = N + 1;
        if (j1 <= N) {
            lo = j1 + 1; hi = N;
            while (lo <= hi) {
                int mid = (lo + hi) / 2;
                if (query_max(j1 + 1, mid) >= base) { j2 = mid; hi = mid - 1; }
                else lo = mid + 1;
            }
        }

        ans += j2 - i;   // 以 i 为左端点的合法区间数
    }
    
    cout << ans << "\n";
    return 0;
}