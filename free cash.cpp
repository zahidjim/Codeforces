#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    int n,a,b,mx=0;
    cin >> n;

    map<int,int>mp;

    while(n--)
    {
        cin >> a >> b;
        ++mp[a*60+b];
    }

    for(auto it : mp)
    {
        mx = max(mx,it.second);
    }

    cout << mx << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}

