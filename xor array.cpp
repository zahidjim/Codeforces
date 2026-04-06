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
    int n,l,r,c = 1;
    cin >> n >> l >> r;

    vector<int>vec(n+1);

    for(int i=0;i<=n;++i)
    {
        if(i!=(l-1) || i!=r)
        {
            vec[i] = c;
            ++c;
        }
    }
    vec[l-1] = 0;
    vec[r] = 0;

    for(int i=1;i<=n;++i)
    {
        cout << (vec[i]^vec[i-1]) << ' ';
    }
    cout << endl;
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
