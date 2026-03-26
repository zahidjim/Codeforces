#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
void solve()
{
    ll n,m,temp,ans = 0;
    cin >> n >> m;

    if(m<n/2)
    {
        if(n%m!=0)
        {
            ll a = n/m, b = n%m;
            ans = (m-b)*a*(a-1)/2 + b*a*(a+1)/2;
        }
        else
        {
            temp = n/m;
            ans += (m*temp*(temp-1))/2;
        }
    }
    else
    {
        ans = n-m;
    }
    cout << ans << ' ' << (n-m+1)*(n-m)/2 << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
