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
    ll n,ans = -1e9,cnt = 1,mcnt = 1,mans;
    cin >> n;
    vector<ll>vec(n),arr(n);

    take(vec);

    ans = vec[0],mans = vec[0];

    for(ll i=0; i<n; ++i)
    {
        arr[i] = (vec[i]>0);
    }

    for(ll i=1; i<n; ++i)
    {
        if(arr[i]!=arr[i-1])
        {
            vec[i] += vec[i-1];
            ++cnt;
            ans = vec[i];
        }
        else
        {
            cnt = 1;
            ans = vec[i];
        }
        if(cnt>=mcnt)
        {
            mans = max(ans,mans);
        }
    }
    return mans;
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
