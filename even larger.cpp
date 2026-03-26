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
    ll n,cnt = 0,diff,temp;
    cin >> n;
    vector<ll>vec(n);
    take(vec);

    for(ll i=1;i<n;i+=2)
    {
        if(vec[i]<vec[i-1])
        {
            cnt += (vec[i-1]-vec[i]);
            vec[i-1] = vec[i];
        }
        if(i<(n-1) && vec[i]<vec[i+1])
        {
            cnt += (vec[i+1]-vec[i]);
            vec[i+1] = vec[i];
        }
    }

    for(ll i=1;i<n-1;i+=2)
    {
        diff = vec[i-1]+vec[i+1]-vec[i];
        if(diff>0)
        {
            temp = min(diff,vec[i+1]);
            diff -= temp;
            vec[i+1] -= temp;
            cnt += temp;
            if(diff>0)
            {
                cnt += diff;
            }
        }
    }
    return cnt;
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
