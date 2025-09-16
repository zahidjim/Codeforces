#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
ll solve()
{
    ll n,k,temp,cnt = 0;
    cin >> n >> k;

    temp = k;

    vector<ll>vec(n);

    for(ll i=0;i<n;++i)
    {
        cin >> vec[i];
    }

    sort(vec.rbegin(),vec.rend());

    n = min(n,k);
    for(ll i=0;i<n;++i)
    {
        cnt += (vec[i]*temp--);
    }

    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}

