#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void check()
{
    int n;
    cin >> n;
    int answer = 0;
    for (ll a = 1; a <= n; a = a * 10 + 1)
    {
        for (int d = 1; d <= 9; d++)
        {
            if (a * d <= n)
            {
                answer++;
            }
        }
    }
    cout << answer << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t-- > 0)
    {
        check();
    }
    
}