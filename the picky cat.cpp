#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
bool solve()
{
    ll n;
    cin >> n;
    vector<ll>vec(n);

    for(ll i=0;i<n;++i)
    {
        cin >> vec[i];
        if(vec[i]<0)
        {
            vec[i] *= -1;
        }
    }

    ll target = vec.front();

    sortt(vec);

    ll lp,rp;

    for(ll i=0;i<n;++i)
    {
        if(vec[i]==target)
        {
            lp =  i+1;
            break;
        }

    }
    for(ll i=n-1;i>=0;--i)
    {
        if(vec[i]==target)
        {
            rp = n-i;
            break;
        }
    }
    return ((lp<=(n+1)/2) || (rp==(n+1)/2));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        cout << (solve()?"YES":"NO") << endl;
    }
    return 0;
}
