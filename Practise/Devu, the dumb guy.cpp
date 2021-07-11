#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    cout.tie(nullptr);

    long long b, c;
    while (cin >> b >> c)
    {
        long long a[b + 1];
        for (long long i = 0; i < b; i++)
        {
            cin >> a[i];
        }    


        sort(a, a + b);

        
        long long ans = 0;
        for (long long i = 0; i < b; i++)
        {
            ans += a[i] * c;
            if (c > 1)
                c--;
        }
        cout << ans << endl;
    }
    return 0;
}
