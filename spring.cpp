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
void solve()
{
    ll a,b,c,m;
    cin >> a >> b >> c >> m;

    ll A = m/a, B = m/b, C = m/c;
    ll ab = lcm(a,b), bc = lcm(b,c), ca = lcm(c,a),abc = lcm(ab,c);

    ll AB = m/ab, BC = m/bc, CA = m/ca, ABC = m/abc;

    A = A - AB - CA + ABC;
    B = B - AB - BC + ABC;
    C = C - CA - BC + ABC;

    AB = AB-ABC;
    CA = CA - ABC;
    BC = BC - ABC;

    cout << 6*A + 3*(AB+CA) + 2*ABC << ' ';
    cout << 6*B + 3*(AB+BC) + 2*ABC << ' ';
    cout << 6*C + 3*(CA + BC) + 2*ABC << endl;
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
