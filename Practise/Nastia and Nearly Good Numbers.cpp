#include <bits/stdc++.h>

using namespace std;


int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int A,B;
        cin >> A >> B;
        if (B==1)
        {
            cout << "No" << endl;
        }
        else {
            cout << "YES" << endl;
            cout << A << ' ' << A * (long long)B << ' ' << A * (long long)(B + 1) << endl;
        }
        
    }
}


