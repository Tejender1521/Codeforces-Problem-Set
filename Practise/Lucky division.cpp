#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);  
    int n, i, a[10] = {4, 7, 47, 74, 447, 474, 477, 774, 747, 744}, cnt = 0;
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (n == a[i] || n % a[i] == 0)
        {
            cout << "YES";
            break;
        }

        else
            cnt++;
    }
    if (cnt == 10)
    { 
        cout << "NO";
    }   
    return 0;
}