#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str1,str2,str3;

    getline(cin, str1);
    getline(cin, str2);
    getline(cin, str3);

    str1.append(str2);
    sort(str1.begin(),str1.end());
    sort(str3.begin(),str3.end());
    if (str1 == str3)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    


}