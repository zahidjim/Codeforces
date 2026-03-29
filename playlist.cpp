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
    ll n,ans = 0,temp,mn = 0;
    cin >> n;
    map<ll,ll>mape;
    for(ll i=1;i<=n;++i)
    {
        cin >> temp;
        if(mape.count(temp)==0)
        {
            mape[temp] = i;
        }
        else
        {
            mn = max(mn,mape[temp]);
            mape[temp] = i;
        }
        ans = max(ans,i-mn);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve() << endl;

    return 0;
}
