#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
bool take(vector<ll>&vec, ll n)
{
    ll sum = 0,mx=0;
    for(ll i=0;i<n;++i)
    {
        cin >> vec[i];
        sum += vec[i];
        mx = max(mx,vec[i]);
    }

    return (!(sum&1) && sum>=(2*mx));
}
bool solve()
{
    ll n;
    cin >> n;

    vector<ll>vec(n);

    return take(vec,n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
//    cin >> t;
    while(t--)
    {
        cout << (solve()?"YES":"NO") << endl;
    }
    return 0;
}

