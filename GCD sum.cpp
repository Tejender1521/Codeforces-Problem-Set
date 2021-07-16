#include<bits/stdc++.h>

using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}
 
int dig(ll n)
{
    int sum  = 0;
    while(n) sum += n % 10, n /= 10;
    return sum;
}
 
void cp()
{
    ll n;
    cin >> n;
    while(gcd(n, dig(n)) == 1) n++;
    cout << n << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    t = 1;
    cin >> t;
    while(t--)
    {
        cp();
    }
    return 0;
}