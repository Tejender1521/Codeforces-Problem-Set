#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,ans = 0;
    cin >> n;
    int arr1[n],arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i] >> arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ( (arr2[i]-arr1[i]) >= 2)
        {
            ans++;
        }
        else
        {
            continue;
        }
        
    }
    cout << ans;
}