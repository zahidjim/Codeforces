#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
ll solve()
{
    ll n,k,sum = 0;
    cin >> n >> k;

    vector<ll>arr(n),brr(k);
    for(ll i=0;i<n;++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for(ll i=0;i<k;++i)
    {
        cin >> brr[i];
    }

    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());

    ll i=n,j=0;

    while(j<k)
    {
        i -= brr[j];
        if(i<0)
        {
            break;
        }
        sum -= arr[i];
        ++j;
    }
    return sum;
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

