#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w;
    int count = 0;
    int b;

    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        count = count + (i * k);
    }
    if (n >= count)
    {
        b = 0;
    }
    else
    {
        b = count - n;
    }

    cout << b;
}
