#include<bits/stdc++.h>

using namespace std;

int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int count = 1;
    string str;
    getline(cin, str);
    sort(str.begin(), str.end());
    
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != str[i+1])
        {

            count++;
        }
        
    }
    
    if ((count % 2) !=1)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
}