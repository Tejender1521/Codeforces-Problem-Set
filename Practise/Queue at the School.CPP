#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n,t;
    cin >> n >> t;

    char arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < t; ++i)
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i-1] == 'B' && arr[i] == 'G')
            {
                swap(arr[i-1],arr[i]);
                ++i;
            }
            

        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    
    


    


}