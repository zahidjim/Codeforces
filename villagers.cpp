#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
ll solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    for(ll i=0;i<n;++i)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    ll cnt = 0;

    for(ll i=n-1;i>=0;i-=2)
    {
        if(i==0)
        {
            return (cnt+arr[0]);
        }
        cnt += max(arr[i],arr[i-1]);
    }
    return cnt;
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

