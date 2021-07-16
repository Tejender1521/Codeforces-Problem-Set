#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    string str;
    getline(cin, str);
    
    sort(str.begin(), str.end());
    string str1;
    str1 = str.substr( (str.length()/2) ,str.length());
    
    for (int i = 0; i < str1.length()-1; i++)
    {
        cout << str1[i] << "+";
    }
    cout << str1[str1.length()-1];
    
}