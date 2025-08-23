#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
ll solve()
{
    ll n;
    cin >> n;

    ll lim = (floor)(log(n)/log(2)+1e-9);

    return ((n*(n+1))/2 - 2*((1<<(lim+1)) - 1));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}

