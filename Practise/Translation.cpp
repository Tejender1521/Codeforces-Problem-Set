#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str1,str2;
    getline(cin, str1);
    getline(cin, str2);

    reverse(str1.begin(),str1.end());

    if (str1 == str2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}