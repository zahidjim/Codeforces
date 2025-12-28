#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
void take(vector<ll>&vec, ll n)
{
    for(ll i=0;i<n;++i)
    {
        cin >> vec[i];
    }
    return;
}
ll solve()
{
    ll n,x,strength,members=1,cnt = 0;
    cin >> n >> x;
    vector<ll>vec(n);

    take(vec,n);

    sort(vec.rbegin(),vec.rend());

    for(ll i=0;i<n;++i)
    {
        strength = members*vec[i];

        if(strength>=x)
        {
            members = 1;
            ++cnt;
        }
        else
        {
            ++members;
        }
    }

    return cnt;
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

