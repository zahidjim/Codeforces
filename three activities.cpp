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
    ll n,temp,ans = 0,a,b,c;
    cin >> n;
    vector<vector<pair<ll,ll>>>vec(3);

    for(ll i=0; i<3; ++i)
    {
        for(ll j=0; j<n; ++j)
        {
            cin >> temp;
            vec[i].push_back({temp,j});
        }
        rsort(vec[i]);
    }
    rsort(vec);

    for(ll i=0; i<3; ++i)
    {
        a = vec[0][i].second;
        for(ll j=0; j<3; ++j)
        {
            b = vec[1][j].second;
            if(a==b)
            {
                continue;
            }
            for(ll k=0; k<3; ++k)
            {
                c = vec[2][k].second;
                if(c==a || c==b)
                {
                    continue;
                }
                ans = max(ans,vec[0][i].first + vec[1][j].first + vec[2][k].first);
            }
        }
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
