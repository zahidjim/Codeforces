#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
void solve()
{
    ll c;
    cin >> c;

    ll l = floor(log(c)/log(2)) + 1;

    ll ans = (c<<l)|c;

    cout << ans << ' ' << (c<<l) << endl;
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
