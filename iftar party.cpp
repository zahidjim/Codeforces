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
void solve(ll t)
{
    ll a, b, c, n;
    cin >> a >> b;
    cout << "Case " << t << ": ";
    c = a-b;

    vector<ll>vec;

    for(ll i=1; i*i<=c; ++i)
    {
        if(c%i==0)
        {
            if(i>b)
            {
                vec.emplace_back(i);
            }
            if(c!=i*i && (c/i)>b)
            {
                vec.emplace_back(c/i);
            }
        }
    }

    if(vec.empty())
    {
        cout << "impossible" << endl;
        return;
    }
    sortt(vec);
    n=vec.size();

    cout << vec[0];
    for(ll i=1; i<n; ++i)
    {
        cout << ' ' << vec[i];
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
    for(ll i=1; i<=t; ++i)
    {
        solve(i);
    }
    return 0;
}

