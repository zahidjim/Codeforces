#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
void take(vector<ll>&vec, ll n)
{
    for(ll i=0; i<n; ++i)
    {
        cin >> vec[i];
    }
    return;
}
ll solve()
{
    ll n,q,l,r,ans = 0;
    cin >> n >> q;

    vector<ll>vec(n);

    take(vec,n);

    sort(vec.rbegin(),vec.rend());

    vector<ll>veb(n+1,0);

    while(q--)
    {
        cin >> l >> r;

        ++veb[l-1];
        --veb[r];
    }

    for(int i=1;i<n;++i)
    {
        veb[i] += veb[i-1];
    }

    sort(veb.rbegin(),veb.rend());

    for(ll i=0; i<n; ++i)
    {
        ans += vec[i]*veb[i];
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cout << solve() << endl;

    return 0;
}

