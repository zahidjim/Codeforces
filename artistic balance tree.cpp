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
    ll n,temp,m,sum=0,dodd=0,deven=0;
    cin >> n >> m;
    vector<ll>odd,even;

    for(ll i=1; i<=n; ++i)
    {
        cin >> temp;
        sum += temp;
        if(i&1)
        {
            odd.emplace_back(temp);
        }
        else
        {
            even.emplace_back(temp);
        }
    }

    sortt(odd);
    sortt(even);

    for(ll i=0; i<m; ++i)
    {
        cin >> temp;
        if(temp&1)
        {
            if(odd.empty())
            {
                continue;
            }
            else if(odd.back()==0)
            {
                continue;
            }
            else if(odd.back()<0)
            {
                if(dodd!=0)
                {
                    continue;
                }
                else
                {
                    dodd += odd.back();
                    odd.pop_back();
                }
            }
            else
            {
                dodd += odd.back();
                odd.pop_back();
            }
        }
        else
        {
            if(even.empty())
            {
                continue;
            }
            else if(even.back()==0)
            {
                continue;
            }
            else if(even.back()<0)
            {
                if(deven!=0)
                {
                    continue;
                }
                else
                {
                    deven += even.back();
                    even.pop_back();
                }
            }
            else
            {
                deven += even.back();
                even.pop_back();
            }
        }
    }
    return (sum-deven-dodd);
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
