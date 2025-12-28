#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
ll solve()
{
    ll a,b,c;
    cin >> a >> b >> c;

    ll mx = (c+a-1)/a;

    ll gap = b-mx;

    return (mx+gap)/(gap+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    cin >> t;
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}

