#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        if (n == 1)
        {
            cout << "I hate it";
            break;
        }
        else
        {

            if (i % 2 == 0)
            {
                cout << "I hate that"
                     << " ";
            }
            else
            {
                cout << "I love that"
                     << " ";
            }
        }
    }
    if (n % 2 != 0)
    {
        cout << "I hate it"
             << " ";
    }
    else
    {
        cout << "I love it"
             << " ";
    }
}