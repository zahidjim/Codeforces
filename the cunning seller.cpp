#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
ll solve()
{
    ll n,cnt=0,temp,mul,coin=0;
    cin >> n;

    ll pos = (floor)(log((double)n)/log(3.0)+1e-9);

    while(n)
    {
        temp = (ll)pow(3,pos);
        mul = n/temp;

        coin += mul*((ll)pow(3,pos+1) + pos*(ll)pow(3,pos-1));
        if(pos>0)
        {
            --pos;
        }
        n -= temp*mul;
    }
    return coin;
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

