#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    int n,m;
    cin >> n >> m;

    vector<tuple<int,int,int>>adj(m);

    for(auto &[a,b,c]: adj)
    {
        cin >> a >> b >> c;
    }

    vector<int>vec(n+1,1e9);

    for(auto &[a,b,c]: adj)
    {
        vec[a] = min(vec[a],c);
        vec[b] = min(vec[b],c);
    }

    for(auto &[a,b,c]: adj)
    {
        if(max(vec[a],vec[b])!=c)
        {
            cout << -1 << endl;
            return;
        }
    }

    for(int i=1;i<=n;++i)
    {
        cout << vec[i] << ' ';
    }
    cout << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

