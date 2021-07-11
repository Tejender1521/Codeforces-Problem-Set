#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int mm = 0;
    long long int me = INT_MIN;
    long long int c = 1, x = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            c++;
        }
        else
        {
            if (x < c)
                x = c;
            c = 1;
        }
    }
    if (x < c)
        x = c;
    cout << x;
}