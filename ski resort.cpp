#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
ll solve()
{
    ll n,k,q,cnt=0;
    cin >> n >> k >> q;

    vector<ll>vec;
    vec.reserve(n);

    vec.push_back(0);

    ll temp;

    for(ll i=0;i<n;++i)
    {
        cin >> temp;

        if(temp<=q)
        {
            ++vec.back();
        }
        else
        {
            vec.push_back(0);
        }
    }

    for(ll i=0;i<vec.size();++i)
    {
        if(vec[i]>=k)
        {
            temp = vec[i]-k+1;
            cnt += (temp*(temp+1))/2;
        }
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

