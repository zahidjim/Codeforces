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
bool solve()
{
    int n,p,c;
    cin >> n;
    vector<pair<int,int>>vec(n+1);

    for(int i=1;i<=n;++i)
    {
        cin >> vec[i].first >> vec[i].second;
    }

    vec[0].first = 0;
    vec[0].second = 0;

    for(int i=1;i<=n;++i)
    {
        p = vec[i].first - vec[i-1].first;
        c = vec[i].second - vec[i-1].second;

        if(p<0 || c<0)
        {
            return false;
        }

        if(p<c)
        {
            return false;
        }
    }
    return true;
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
