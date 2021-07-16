#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int mini = 100000;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    for (int i = n; i <= m; i++)
    {
        mini = min(mini, abs(arr[i - 1] - arr[i - n]));
    }
    cout << mini;

    return 0;
}