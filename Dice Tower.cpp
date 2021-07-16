#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    bool ans(true);
    int n,x,a,b;

    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (x == a || x == b || x == 7-a || x == 7-b)
        {
            ans = false;
        }
        x = 7-x;
    }
    if (ans ==true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}