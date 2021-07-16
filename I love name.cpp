#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;
    int N, min, max, count = 0;
    cin >> N;
    a.resize(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
    }

    min = max = a[0];

    for (int i = 1; i < N; ++i)
    {
        if (a[i] > max)
        {
            count++;
            max = a[i];
        }
        if (a[i] < min)
        {
            count++;
            min = a[i];
        }
    }
    cout << count;
}