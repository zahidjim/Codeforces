#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
ll lcm(ll a, ll b)
{
    return (a*b)/__gcd(a,b);
}
ll solve()
{
    ll n,x,y,a,b;
    cin >> n >> x >> y;

    a = n/x - n/lcm(x,y);
    b = n/y - n/lcm(x,y);

    a = n-a;
    a = n*(n+1)/2 - a*(a+1)/2;
    b = b*(b+1)/2;

    return (a-b);
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
