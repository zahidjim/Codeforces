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
    ll n,x,s=0,cnt = 0, e;
    cin >> n >> x;
    e = n-1;
    vector<ll>vec(n);
    take(vec);

    sortt(vec);

    while(s<e)
    {
        n = vec[s]+vec[e];
        if(n>x)
        {
            ++cnt;
            --e;
        }
        else if(n<=x)
        {
            ++cnt;
            --e;
            ++s;
        }
    }
    cnt += (s==e);
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve() << endl;

    return 0;
}
