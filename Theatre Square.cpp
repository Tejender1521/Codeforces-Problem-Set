#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    cout.tie(nullptr);

    long long int m,n,a;
    cin >> m >> n >> a;
    cout <<  ((m+a-1)/a)*((n+a-1)/a);
    
}