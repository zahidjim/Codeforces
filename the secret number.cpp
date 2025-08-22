#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
void solve()
{
    vector<ll>vec;
    vec.reserve(9);
    ll n,i=0;

    cin >> n;

    ll arr[17] = {11,101,1001,10001,100001,1000001,10000001,100000001,1000000001,10000000001,100000000001,1000000000001,10000000000001,100000000000001,1000000000000001,10000000000000001,100000000000000001};

    while(i<17 && arr[i]<=n)
    {
        if(n%arr[i]==0)
        {
            vec.push_back(n/arr[i]);
        }
        ++i;
    }

    n = vec.size();

    cout << n << endl;

    if(n==0)
    {
        return;
    }

    sort(vec.begin(),vec.end());

    cout << vec[0];

    for(i=1; i<n; ++i)
    {
        cout << ' ' << vec[i];
    }
    cout << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

