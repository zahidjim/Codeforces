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
ll solve()
{
    ll n;
    cin >> n;
    vector<ll>a(n),b(n);

    take(a);
    take(b);

    ll ans = (gcd(a[0],a[1])!=a[0]) + (a[n-1]!=gcd(a[n-1],a[n-2]));
    for(ll i=1;i<n-1;++i)
    {
        ans += (a[i]!=lcm(gcd(a[i],a[i-1]),gcd(a[i],a[i+1])));
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
