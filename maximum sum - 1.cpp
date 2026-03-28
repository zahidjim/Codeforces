#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
ll module(ll a)
{
    return ((a %1000000007)+1000000007)%1000000007;
}
ll solve()
{
    ll n,sum,msum,k;
    cin >> n >> k;
    vector<ll>vec(n);
    take(vec);

    msum = vec[0];
    sum = msum;

    for(ll i=1;i<n;++i)
    {
        sum += vec[i];
        if(vec[i-1]>0)
        {
            vec[i] += vec[i-1];
        }
        msum = max(msum,vec[i]);
    }
    sum = module(sum);
    if(msum<0)
    {
        return module(sum);
    }
    msum = module(msum);
    ll t = 1;
    while(k--)
    {
        t = t*2;
        t = module(t);
    }
    return (sum+msum*t-msum+1000000007)%1000000007;
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
