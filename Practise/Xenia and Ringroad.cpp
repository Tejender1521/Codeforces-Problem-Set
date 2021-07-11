#include <bits/stdc++.h>

using namespace std;
int n, m, a, cur = 1;
__int64 ans = 0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        if (a >= cur)
        {
            ans += (a - cur);
        }
        else
        {
            ans += n - cur + a;
        }
        cur = a;
    }
    cout << ans;
}