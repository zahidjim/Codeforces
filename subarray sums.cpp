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
    ll n,x;
    cin >> n >> x;
    vector<ll>vec(n+1,0);

    for(ll i=1; i<=n; ++i)
    {
        cin >> vec[i];
        vec[i] += vec[i-1];
    }

    ll s = 0, sum, e = 1,cnt = 0;

    while(e<=n)
    {
        sum = vec[e] - vec[s];
        if(sum<x)
        {
            ++e;
        }
        else if(sum==x)
        {
            ++cnt;
            ++s;
            ++e;
        }
        else if(sum>x)
        {
            ++s;
        }
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve() << endl;

    return 0;
}
