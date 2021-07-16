#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, count = 0;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }

    int a = *max_element(arr.begin(), arr.end());
    int b = *min_element(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (i%2!=0)
        {
            if (arr[i]==a || arr[i]==b)
            {
                continue;
            }
            else
            {
                count++;
            }
            
        }
        else
        {
           if (arr[i]==a || arr[i]==b)
            {
                continue;
            }
            else
            {
                count++;
            }
             
        }
        
        
    }
    cout << count << endl;
    cout << a << b;
}
