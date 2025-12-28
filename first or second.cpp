#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
void take(vector<ll>&vec, ll n)
{
    for(ll i=0;i<n;++i)
    {
        cin >> vec[i];
    }
    return;
}
ll solve()
{
    ll n;
    cin >> n;
    vector<ll>vec(n),suf(n,0),pre(n,0);

    take(vec,n);

    suf.back() = -vec.back();

    for(ll i=n-2;i>0;--i)
    {
        suf[i] = suf[i+1] - vec[i];
    }

    pre.front() = vec.front();

    for(ll i=1;i<n-1;++i)
    {
        if(vec[i]>0)
        {
            pre[i] = pre[i-1] + vec[i];
        }
        else
        {
            pre[i] = pre[i-1] - vec[i];
        }
    }

    ll mx = max(suf[1],pre[n-2]);

    for(ll i=1;i<n-1;++i)
    {
        mx = max(mx,suf[i+1]+pre[i-1]);
    }

    return mx;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    cin >> t;
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}
