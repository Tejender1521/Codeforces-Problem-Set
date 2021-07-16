#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a,b;
    int y = 0;
    cin >> a >> b;
    while (b >= a)
    {
        a = a*3;
        b = b*2;
        y++;   
    }
    cout << y;
}
