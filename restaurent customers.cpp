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
    ll n,a,b;
    map<ll,ll>mape;
    cin >> n;
    vector<ll>vec;
    vec.reserve(2*n);
    while(n--)
    {
        cin >> a >> b;
        ++mape[a];
        --mape[b+1];
    }
    for(auto [a,b]: mape)
    {
        vec.emplace_back(a);
    }
    n = vec.size();
    ll mx = mape[vec[0]];
    for(ll i=1;i<n;++i)
    {
        mape[vec[i]] += mape[vec[i-1]];
        mx = max(mx,mape[vec[i]]);
    }
    return mx;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve() << endl;

    return 0;
}
