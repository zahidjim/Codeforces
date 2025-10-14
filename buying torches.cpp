#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
ll solve()
{
    ll x,y,k;
    cin >> x >> y >> k;

    return (k+(k*(y+1)+x-3)/(x-1));
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

