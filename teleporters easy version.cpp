#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
void take(vector<ll>&vec, ll n)
{
    for(ll i=0;i<n;++i)
    {
        cin >> vec[i];
        vec[i] += (i+1);
    }
    return;
}
ll solve()
{
    ll n,c,cnt = 0;
    cin >> n >> c;
    vector<ll>vec(n);

    take(vec,n);

    sort(vec.begin(),vec.end());

    for(ll i=0;i<n;++i)
    {
        if(c>=vec[i])
        {
            ++cnt;
            c -= vec[i];
        }
        else
        {
            break;
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

