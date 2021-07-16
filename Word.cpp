#include<bits/stdc++.h>

using namespace std;

int main()
{
    int upper=0,lower=0;
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if (upper > lower)
    {
        transform(str.begin(),str.end(),str.begin(),::toupper);
    }
    else
    {
        transform(str.begin(),str.end(),str.begin(),::tolower);
    }
    cout << str;
    
}