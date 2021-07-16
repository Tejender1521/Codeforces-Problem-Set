#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int n, var = 0, ans = 0;
    cin >> n;
    while (n--)
    {
        long long int temp;
        cin >> temp;
        if (temp == -1)
        {
            if (!var)
                ans++;
            else
                var--;
        }
        else
            var += temp;
    }
    cout << ans << endl;
    
}