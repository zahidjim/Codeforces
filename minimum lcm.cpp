#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
void solve()
{
    ll n;
    cin >> n;

    if(!(n&1))
    {
        cout << n/2 << ' ' << n/2 << endl;
        return;
    }
    for(ll i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        {
            cout << n/i << ' ' << (i-1)*(n/i) << endl;
            return;
        }
    }
    cout << 1 << ' ' << n-1 << endl;
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
