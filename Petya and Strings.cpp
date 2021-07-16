#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str1,str2;
    getline(cin, str1);
    getline(cin, str2);

    transform(str1.begin(),str1.end(),str1.begin(),::towlower);
    transform(str2.begin(),str2.end(),str2.begin(),::towlower);
    

    
    if (str1 == str2)
    {
        cout << "0";
    }
    else if (str1 < str2)
    {
        cout << "-1";
        
    }
    else
    {
        cout << "1";
    }
}