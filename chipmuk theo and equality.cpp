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
ll target(ll a, ll b)
{
    ll cnt = 0;
    while(a!=b)
    {
        if(a&1)
        {
            ++a;
        }
        else
        {
            a /= 2;
        }
        ++cnt;
    }
    return cnt;
}
ll solve()
{
    ll n,temp,mn = 1e9;
    cin >> n;

    map<ll,ll>mape,possible;

    for(ll i=0;i<n;++i)
    {
        cin >> temp;
        ++mape[temp];
    }

    for(auto [a,b]: mape)
    {
        temp = a;
        if(temp==1)
        {
            possible[2] += b;
            possible[1] += b;
            continue;
        }
        while(temp>1)
        {
            possible[temp] += b;
            if(temp&1)
            {
                ++temp;
            }
            else
            {
                temp /= 2;
            }
        }
        possible[temp] += b;
    }

    vector<ll>vec;

    for(auto [a,b]: possible)
    {
        if(b==n)
        {
            vec.emplace_back(a);
        }
    }

    n = vec.size();

    for(ll i=0;i<n;++i)
    {
        temp = 0;
        for(auto [a,b]: mape)
        {
            temp += target(a,vec[i])*b;
        }
        mn = min(mn,temp);
    }
    return mn;
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
