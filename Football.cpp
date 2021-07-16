
#include <bits/stdc++.h>
using namespace std;

int Substring(string s)
{

	int ans = 1, temp = 1;


	for (int i = 1; i < s.size(); i++) {

		if (s[i] == s[i - 1]) {
			++temp;
		}
		else {
			ans = max(ans, temp);
			temp = 1;
		}
	}
	ans = max(ans, temp);


	return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
	string s;
    getline(cin, s);

    int a = Substring(s);
    
    if (a >= 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    

	return 0;
}
