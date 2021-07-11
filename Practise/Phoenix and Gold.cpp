#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define ln "\n"
#define ll long long int
#define Mod 1000000007
#define lld long double
template <typename T_vector>
void output_vector(const T_vector &v, bool add_one = false, int start = -1, int end = -1)
{
    if (start < 0)
        start = 0;
    if (end < 0)
        end = int(v.size());

    for (int i = start; i < end; i++)
        cout << v[i] + (add_one ? 1 : 0) << (i < end - 1 ? ' ' : '\n');
}

void solve(int tc)
{
    ll n, x;
    cin >> n >> x;
    vector<ll> w(n);
    for (ll i = 0; i < n; i++)
        cin >> w[i];
    ll total = w[0];
    ll idx = -1;
    if (total == x)
    {
        idx = 0;
    }
    for (ll i = 1; i < n; i++)
    {
        total += w[i];
        if (total == x)
        {
            idx = i;
        }
    }
    
    if (idx == -1)
    {
        cout << "YES" << ln;
        output_vector(w);
        return;
    }
    if (total == x)
    {
        cout << "NO" << ln;
        return;
    }
    ll i;
    for (i = idx + 1; i < n; i++)
    {
        if (w[i] != w[idx])
        {
            ll temp = w[idx];
            w[idx] = w[i];
            w[i] = temp;
            break;
        }
    }
    cout << "YES" << ln;
    output_vector(w);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << setprecision(15) << fixed;
    ll t = 1;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        solve(i);
    }
    return 0;
}