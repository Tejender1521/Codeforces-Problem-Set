#include <bits/stdc++.h>

const int xn = 1e2 + 10;
const int inf = 1e9 + 10;

using namespace std;

int t, n, a[xn], mn, ans;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n, mn = inf, ans = 0;
        for (int i = 1; i <= n; ++i)
            cin >> a[i], mn = min(mn, a[i]);
        for (int i = 1; i <= n; ++i)
            ans += a[i] != mn;
        cout << ans << endl;
    }

    return 0;
}