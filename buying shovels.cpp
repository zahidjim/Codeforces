#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
ll solve()
{
    ll n,k,t,mn;
    cin >> n >> k;

    mn = n;

    if(k==1)
    {
        return n;
    }
    else if(k>=n)
    {
        return 1;
    }

    ll temp = sqrt(n);

    if(temp>k)
    {
        temp = k;
    }

    for(ll i=2; i<=temp; ++i)
    {
        if(n%i==0)
        {
            t = n/i;
            if(t<=k)
            {
                return i;
            }
            else
            {
                mn = min(mn,t);
            }
        }
    }
    return mn;
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

