#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int count = 0;
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '7' )
        {  
            count++;
        }
        else if (str[i] == '4')
        {
            count++;
        }
        
        else
        {
            continue;
        }
    }
    if (count == 7 )
    {
        cout << "YES" ;
    }
    else if (count == 4)
    {
        cout << "YES" ;
    }
    
    else
    {
        cout << "NO" ;
    }
    
    
}
