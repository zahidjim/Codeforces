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
    ll n,sum;
    cin >> n >> sum;

    vector<ll>arr,vec(n);

    take(vec);

    ll s = 0, e = n-1, ans=0, cost, mid,k=0;

    while(s<=e)
    {
        mid = (s+e)/2;
        cost = 0;
        for(ll i=0; i<n; ++i)
        {
            arr.emplace_back(vec[i]+(mid+1)*(i+1));
        }

        sortt(arr);

        for(int i=0;i<=mid;++i)
        {
            cost += arr[i];
        }

        arr.clear();
        if(cost<=sum)
        {
            ans = cost;
            k = mid+1;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }
    cout << k << ' ' << ans << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
