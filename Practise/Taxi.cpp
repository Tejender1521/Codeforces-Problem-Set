#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n = 0;
    cin >> n;
    int ans = 0;
    int A[3] = {0};
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (4 == a)
            ans++;
        else
            A[a - 1]++;
    }

    ans += A[1] / 2;
    A[1] %= 2;

    if (A[0] <= A[2])
    {
        ans += A[0];
        A[2] -= A[0];
        if (A[1])
            ans++;
        ans += A[2];
    }
    else
    {
        ans += A[2];
        A[0] -= A[2];
        ans += A[0] / 4;
        A[0] %= 4;
        if (A[1])
        {
            A[0] -= 2;
            ans++;
        }
        if (A[0] > 0)
            ans++;
    }

    cout << ans;
}
