#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
bool solve()
{
    ll n;
    cin >> n;

    vector<ll>vec(n);

    cin >> vec[0];

    for(ll i=1; i<n; ++i)
    {
        cin >> vec[i];
        vec[i] += vec[i-1];
    }

    for(ll i=0; i<n; ++i)
    {
        if(vec[i]<((i*(i+1))/2))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    cin >> t;
    while(t--)
    {
        cout << (solve()?"YES":"NO") << endl;
    }
    return 0;
}
