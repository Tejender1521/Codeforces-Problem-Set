#include <bits/stdc++.h>

using namespace std;

int t, r, g, b, w;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> t;
    int a;
    while (t--)
    {
        cin >> r >> g >> b >> w;
        a = (r % 2 == 0) + (g % 2 == 0) + (b % 2 == 0) + (w % 2 == 0);
        if (a > 2)
            cout << "Yes" << endl;

        else if (!r || !g || !b)
            cout << "No" << endl;
        else
        {
            if (a == 2)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }

    return 0;
}