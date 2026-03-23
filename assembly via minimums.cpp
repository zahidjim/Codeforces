#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
void solve()
{
    ll n,temp;
    cin >> n;

    map<ll,ll>mape;

    vector<ll>vec;

    vec.reserve(n);

    ll cnt = n*(n-1)/2;

    for(ll i=0; i<cnt; ++i)
    {
        cin >> temp;
        ++mape[temp];
    }

    cnt = 1;

    for(auto [a,b]: mape)
    {
        while(b>0)
        {
            if(b>=(n-cnt))
            {
                vec.emplace_back(a);
                b -= (n-cnt);
                ++cnt;
            }
        }
    }

    vec.emplace_back(vec.back());

    show(vec);
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
