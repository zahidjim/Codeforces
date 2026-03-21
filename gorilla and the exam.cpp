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
    ll n,temp,k;
    cin >> n >> k;
    map<ll,ll>mape;

    while(n--)
    {
        cin >> temp;
        ++mape[temp];
    }

    vector<ll>vec;
    for(auto [a,b]: mape)
    {
        vec.push_back(b);
    }

    sortt(vec);

    n = mape.size();

    for(auto &a: vec)
    {
        if(k>=a)
        {
            k -= a;
            --n;
        }
        else
        {
            break;
        }
    }

    return max(n,1ll);
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
