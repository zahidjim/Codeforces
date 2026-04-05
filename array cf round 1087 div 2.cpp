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
ll lb(vector<ll>&vec, ll key)
{
    ll n=vec.size(),s=0,e = n-1,mid,ans;
    while(s<=e)
    {
        mid = (s+e)/2;
        if(vec[mid]>=key)
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
ll rb(vector<ll>&vec, ll key)
{
    ll n=vec.size(),s=0,e = n-1,mid,ans;
    while(s<=e)
    {
        mid = (s+e)/2;
        if(vec[mid]<=key)
        {
            ans = n-mid-1;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }
    return ans;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll>vec(n),arr(n),v2;
    take(vec);

    for(ll i=n-1; i>=0; --i)
    {
        v2.emplace_back(vec[i]);
        sortt(v2);
        arr[i] = max(lb(v2,vec[i]),rb(v2,vec[i]));
    }
    show(arr);
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

