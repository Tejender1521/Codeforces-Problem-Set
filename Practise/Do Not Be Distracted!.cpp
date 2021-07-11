#include <bits/stdc++.h>

using namespace std;

int numerize(char x)
{
    if (48 <= int(x) && int(x) <= 57)
        return int(x - '0');
    if (97 <= int(x) && int(x) <= 122)
        return int(x - 96);
    if (65 <= int(x) && int(x) <= 90)
        return int(x - 64);
    return -1;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int f[28];
        for (int i = 0; i <= 26; ++i)
            f[i] = 0;

        bool valid = true;
        f[numerize(s[0])] = 1;
        for (int i = 1; i < s.size(); ++i)
        {
            if (s[i] != s[i - 1])
            {
                if (f[numerize(s[i])])
                    valid = false;
            }
            f[numerize(s[i])] = 1;
        }

        cout << (valid ? "YES\n" : "NO\n");
    }

    return 0;
}