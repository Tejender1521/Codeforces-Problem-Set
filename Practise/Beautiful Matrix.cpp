#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int x,y,a[6][6],solve;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1)
            {
                x=i+1;
                y=j+1;
            }
        }
    }
    solve=abs(x-3)+abs(y-3);
    cout << solve;
    
}