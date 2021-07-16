#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    int capacity = 0;
    int stillnow = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        stillnow -= a;
        stillnow += b;
        capacity = max(capacity, stillnow);
    }
    cout << capacity;

    return 0;
}