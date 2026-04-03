#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
ll bsearch(vector<ll>&vec, ll h)
{
    if(h==0)
    {
        return 0;
    }

    for(int i=0;i<vec.size();++i)
    {
        if(vec[i]>=h)
        {
            return (i+1);
        }
    }
}
ll solve()
{
    ll n,k,h,ans = 1e9;
    cin >> n >> h >> k;

    vector<ll>vec(n),smax(n),npre(n),pre(n),pmin(n);

    take(vec);

    smax.back() = vec.back();
    pmin.front() = vec.front();

    for(int i=1;i<n;++i)
    {
        pmin[i] = min(vec[i],pmin[i-1]);
    }

    for(ll i=n-2;i>=0;--i)
    {
        smax[i] = max(smax[i+1],vec[i]);
    }

    pre[0] = vec[0];

    for(ll i=1;i<n;++i)
    {
        pre[i] = (vec[i] + pre[i-1]);
    }

    npre[0] = smax[0];

    for(int i=1;i<n-1;++i)
    {
        npre[i] = pre[i] - pmin[i] + smax[i+1];
    }

    npre.back() = pre.back();

    ll cost = n*(h/pre.back());

    if(h>pre.back())
    {
        cost += k*(h/pre.back() - (h%pre.back()==0));
    }

    h %= pre.back();

    for(ll i = 0;h>0 && i<n;++i)
    {
        if(pre[i]>=h)
        {
            ans = i+1;
            break;
        }
    }

    cost += min(ans,bsearch(npre,h));

    return cost;
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
