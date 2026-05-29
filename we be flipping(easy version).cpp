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
void solve()
{
    ll n,temp = -1;
    cin >> n;

    vector<ll>vec(n),arr;

    take(vec);

    for(ll i=n-1;i>=0;--i)
    {
        if(vec[i]>0)
        {
            arr.push_back(i+1);
            temp = i;
            break;
        }
    }

    for(ll i=0;i<temp;++i)
    {
        if((vec[i]>0 && vec[i+1]<0) || (vec[i]<0 && vec[i+1]>0))
        {
            arr.push_back(i+1);
        }
    }

    rsort(arr);

    cout << arr.size() << endl;
    show(arr);
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

