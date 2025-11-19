#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
bool okay(ll n, ll s)
{
    ll sum = 0;

    while(n)
    {
        sum += (n%10);
        n /= 10;
    }
    return (sum <= s);
}
ll solve()
{
    ll n,s;
    cin >> n >> s;

    ll res = n,f = 10;

    while(!okay(res,s))
    {
        res = f*((res+f-1)/f);
        f *= 10;
    }

    return res-n;
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

