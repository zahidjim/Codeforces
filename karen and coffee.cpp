#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
void solve()
{
    ll n,k,q,l,r;
    cin >> n >> k >> q;

    vector<ll>vec(200002,0);

    while(n--)
    {
        cin >> l >> r;

        ++vec[l];
        --vec[r+1];
    }

    for(ll i=1;i<200002;++i)
    {
        vec[i] += vec[i-1];
    }

    for(ll i=0;i<200002;++i)
    {
        if(vec[i]>=k)
        {
            vec[i] = 1;
        }
        else
        {
            vec[i] = 0;
        }
    }

    for(ll i=1;i<200002;++i)
    {
        vec[i] += vec[i-1];
    }

    while(q--)
    {
        cin >> l >> r;

        cout << vec[r]-vec[l-1] << endl;
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
