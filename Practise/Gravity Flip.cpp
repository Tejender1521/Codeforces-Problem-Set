#include<bits/stdc++.h>

using namespace std;

int main ()
{
    

    int arr[105],n,i;

    while (cin >> n)
    {
        for (i=0; i<n; i++)
            cin >> arr[i];

        sort (arr,arr+i);

        for (i=0; i<n; i++)
        {
            cout << arr[i];

            if (i == n-1)
                cout << endl;
            else
                cout << " ";
        }
    }

    return 0;
}