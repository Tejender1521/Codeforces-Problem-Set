#include <bits/stdc++.h>
const int xn = 1e5 + 10;
const int inf = 1e9 + 10;
using namespace std;

int t, n, a[xn], ans, mn;
bool flag;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--)
    {
        cin >> n, ans = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i], ans += (a[i] <= 0);
        }

        sort(a + 1, a + n + 1), mn = inf;

        for (int i = 1; i <= n; ++i)
        {
            if (a[i] > 0)
            {
                mn = min(mn, a[i]);
            }
        }


        flag = (mn < inf);

        
        for (int i = 2; i <= n; ++i)
        {
            if (a[i] <= 0)
            {
                flag &= (a[i] - a[i - 1] >= mn);
            }
        }


        if (flag)
        {
            cout << ans + 1 << endl;
        }

        else
        {
            cout << ans << endl;

        }
    }

    return 0;
}