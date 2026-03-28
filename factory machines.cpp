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
    ll n,t,sum,ans;
    cin >> n >> t;
    vector<ll>vec(n);
    take(vec);

    rsort(vec);

    ll s = 1, e = vec[0]*t,mid;

    while(s<=e)
    {
        mid = (s+e)/2;
        sum=0;
        for(ll i=0; i<n; ++i)
        {
            sum += mid/vec[i];
            if(sum>=t)
            {
                break;
            }
        }

        if(sum>=t)
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
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
