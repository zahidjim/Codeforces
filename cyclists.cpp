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
    ll n,k,p,m,temp,ans = 0, ar = 0, br = 0,target;
    cin >> n >> k >> p >> m;
    vector<ll>a,b;
    a.reserve(n);
    b.reserve(n);
    for(ll i=1;i<=n;++i)
    {
        cin >> temp;
        if(i<p)
        {
            a.emplace_back(temp);
            b.emplace_back(temp);
        }
        else if(i>p)
        {
            b.emplace_back(temp);
        }
        else
        {
            target = temp;
        }
    }

    sortt(a);
    sortt(b);

    for(ll i=0;i<(p-k);++i)
    {
        ar += a[i];
    }
    for(ll i=0;i<(n-k);++i)
    {
        br += b[i];
    }

    ar += target;
    br += target;

    if(m>=ar)
    {
        m -= ar;
        ++ans;
    }

    if(m>=br)
    {
        ans += (m/br);
    }
    return ans;
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
