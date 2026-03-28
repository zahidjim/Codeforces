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
    ll n,x,cnt = 0;
    cin >> n >> x;
    vector<ll>vec(n+1,0);

    map<ll,ll>mape;

    mape[0] = 1;

    for(ll i=1;i<=n;++i)
    {
        cin >> vec[i];
        vec[i] += vec[i-1];
        cnt += mape[vec[i]-x];
        ++mape[vec[i]];
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
