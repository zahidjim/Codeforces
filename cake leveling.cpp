#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll>vec(n),pre(n,0);

    take(vec);

    pre[0] = vec[0];

    for(ll i=1;i<n;++i)
    {
        pre[i] = pre[i-1] + vec[i];
    }

    for(ll i=1;i<n;++i)
    {
        vec[i] = min(vec[i-1],pre[i]/(i+1));
    }

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

