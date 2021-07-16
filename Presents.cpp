#include <bits/stdc++.h>

using namespace std;

int n, a, ans[105];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        ans[a] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
}