#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll>vec(n),mx(n,0),sum(n,0);

    cin >> vec.front();
    mx.front()=vec.front();

    for(ll i=1;i<n;++i)
    {
        cin >> vec[i];
        mx[i] = max(mx[i-1],vec[i]);
    }

    sum.back()=vec.back();

    for(ll i=n-2;i>=0;--i)
    {
        sum[i] = sum[i+1]+vec[i];
    }

    for(ll i=n-1;i>=0;--i)
    {
        if(vec[i]<mx[i])
        {
            cout << sum[i]-vec[i]+mx[i] << ' ';
        }
        else
        {
            cout << sum[i] << ' ';
        }
    }
    cout << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
