#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;
    int ans = 1;
    int arr[100000];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] != arr[i+1])
        {
            ans++;
        }
        
    }
    cout << ans;
    
    
}