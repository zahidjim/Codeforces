#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
ll solve()
{
    ll n,temp,m,mn = 1e9,bmin = 1e9,sum = 0;
    cin >> n;
    vector<vector<ll>>vec(n);
    vector<ll>veb(n);

    for(ll i=0;i<n;++i)
    {
        cin >> m;
        vec[i].reserve(m);
        for(ll j=0;j<m;++j)
        {
            cin >> temp;
            vec[i].push_back(temp);
            mn = min(mn,temp);
        }
        sort(vec[i].begin(),vec[i].end());
    }

    for(ll i=0;i<n;++i)
    {
        sum += vec[i][1];
        bmin = min(bmin,vec[i][1]);
    }

    sum = sum - bmin + mn;
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}

