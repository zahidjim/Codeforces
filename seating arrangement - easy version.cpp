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
ll solve()
{
    ll n,x,s,ans = 0,ca = 0,khalitable=0,halfvora=0;
    string str;

    cin >> n >> x >> s >> str;

    vector<ll>vec(x,0);

    for(ll i=0; i<n; ++i)
    {
        while(halfvora<x && vec[halfvora]==s)
        {
            ++halfvora;
        }
        if(str[i]=='I')
        {
            if(khalitable<x)
            {
            ++vec[khalitable];
            ++khalitable;
            ++ans;
            }
        }
        else if(str[i]=='A')
        {
            bool found = false;
            if(halfvora<x && vec[halfvora]>0)
            {
                ++vec[halfvora];
                ++ca;
                found = true;
                ++ans;
                if(vec[halfvora]>=s)
                {
                    ++halfvora;
                }
            }
            if(found==false)
            {
                if(khalitable<x)
                {
                    ++vec[khalitable];
                    ++khalitable;
                    ++ans;
                }
            }
        }
        else
        {
            bool found = false;
            if(halfvora<x && vec[halfvora]>0)
            {
                ++vec[halfvora];
                found = true;
                ++ans;
                if(vec[halfvora]>=s)
                {
                    ++halfvora;
                }
            }
            if(found==false && ca>0)
            {
                if(khalitable<x)
                {
                    ++vec[khalitable];
                    ++khalitable;
                    --ca;
                    ++ans;
                }
            }
        }
    }
    return ans;
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
