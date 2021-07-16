#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,i,a=0,b=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(i=0; i<n; i++)
    {
        if(s[i]=='A')
            a++;
        if(s[i]=='D')
            b++;
    }
    if(a>b)
        printf("Anton\n");
    else if(a<b)
        printf("Danik\n");
    else if(a==b)
        printf("Friendship\n");
    return 0;
}