#include<bits/stdc++.h>

using namespace std;

// Function to demonstrate insert
void insertDemo(string str1)
{
    
	for(int i=0;i<str1.length();i++)
    {
        if (i%2==1)
        {
           str1.insert(i, "."); 
        }
    }
    
	
	cout << "." << str1;
}

string remVowel(string str)
{
    regex r("[aeiouy]"); 
      
    return regex_replace(str, r, "");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string str;
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    (remVowel(str));
	string str1=remVowel(str);
    insertDemo(str1);
}
