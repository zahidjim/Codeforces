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
    ll n,k,mx = 0, ans = 0,e=0;
    cin >> n >> k;

    vector<ll>a(n),b(n);

    take(a);
    take(b);

    for(int i=1;i<n;++i)
    {
        a[i] += a[i-1];
        b[i] = max(b[i],b[i-1]);
    }

    for(ll i=0;i<n && i<k;++i)
    {
        ans = max(ans,a[i]+(k-i-1)*b[i]);
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
