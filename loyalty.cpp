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
void solve()
{
    ll n,x;
    cin >> n >> x;

    vector<ll>vec(n),veb;

    veb.reserve(n);

    take(vec,n);

    sort(vec.begin(),vec.end());

    ll s = 0,e = n-1, sum = 0, pre=0, ans= 0;

    while(s<=e)
    {
        if((sum+vec[e])/x>pre)
        {
            sum += vec[e];
            ans += vec[e];
            veb.push_back(vec[e]);
            --e;
        }
        else
        {
            sum += vec[s];

            if(sum/x>pre)
            {
                ans += vec[s];
            }
            veb.push_back(vec[s]);
            ++s;
        }

        pre = sum/x;
    }

    cout << ans << endl;
    for(auto &ptr: veb)
    {
        cout << ptr << ' ';
    }
    cout << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

