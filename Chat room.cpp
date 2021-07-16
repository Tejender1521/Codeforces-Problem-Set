#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string word = "hello";
    string t;
    cin >> t;
    int l = t.length();

    int a = 0, count = 0;

    for (int i = 0; i < l; i++)
    {
        if (t[i] == word[a])
        {
            a++;
            count++;
        }
    }
    if (count == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
