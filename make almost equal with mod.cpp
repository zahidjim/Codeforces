#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
ll solve()
{
    ll n,temp;
    cin >> n;
    vector<ll>vec(n);
    take(vec);

    map<ll,ll>mape;

    for(ll j=1; j<63; ++j)
    {
        temp = (1ll<<j);
        for(ll i=0; i<n; ++i)
        {
            ++mape[vec[i]%temp];
        }
        if(mape.size()==2)
        {
            return temp;
        }
        else
        {
            mape.clear();
        }
    }
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
