#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll>v(n+1),u(n+1);

    v.front()=0;
    u.front()=0;

    for(ll i=1;i<=n;++i)
    {
        cin >> v[i];
        u[i] = v[i];
    }

    sort(u.begin(),u.end());

    for(ll i=1;i<=n;++i)
    {
        v[i] += v[i-1];
        u[i] += u[i-1];
    }

    ll m,t,l,r;
    cin >> m;

    while(m--)
    {
        cin >> t >> l >> r;
        if(t==1)
        {
            cout << v[r] - v[l-1] << endl;
        }
        else
        {
            cout << u[r] - u[l-1] << endl;
        }
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}

