#include <bits/stdc++.h>

using namespace std;

long long l, r;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> l >> r;

    cout << "YES" << endl;

    while (l < r)
    {
        cout << l << " " << l + 1 << endl;
        l += 2;
    }
}
