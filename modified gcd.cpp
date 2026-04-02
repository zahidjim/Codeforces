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
ll bsearch(vector<ll>&vec, ll l, ll r)
{
    ll s=0,e = vec.size()-1,mid,ans = -1;

    while(s<=e)
    {
        mid = (s+e)/2;
        if(vec[mid]<l)
        {
            s = mid+1;
        }
        else if(vec[mid]>r)
        {
            e = mid-1;
        }
        else
        {
            ans = vec[mid];
            s = mid+1;
        }
    }
    return ans;
}
void solve()
{
    ll a,b,n,g,l,r;
    cin >> a >> b >> n;
    g = gcd(a,b);

    vector<ll>vec;
    for(ll i=1; i*i<=g; ++i)
    {
        if(g%i==0)
        {
            vec.emplace_back(i);
            if(i*i!=g)
            {
                vec.emplace_back(g/i);
            }
        }
    }
    sortt(vec);
    for(ll i=0; i<n; ++i)
    {
        cin >> l >> r;
        cout << bsearch(vec,l,r) << endl;
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
