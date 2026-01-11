#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
ll solve()
{
    ll n,m,k,l,r,ans = 1, mx = 0, temp;

    cin >> n >> m >> k;

    l = k-1;
    r = n-k;

    if(l>r)
    {
        swap(l,r);
    }

    if(l==0)
    {
        return 1+min(r,(m+1)/2);
    }

    for(ll i=1;i<=l && i<=m;++i)
    {
        temp = min(r,(m+1-i)/2);

        if(temp<i)
        {
            continue;
        }

        mx = max(mx,temp+i+1);
    }

    return max(2ll,mx);
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
