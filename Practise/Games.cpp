#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,count=0;
    cin >> n;

    int arr1[n],arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i] >> arr2[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr1[i] == arr2[j])
            {
                count++;
            }
        }
    }
    cout << count;
}

