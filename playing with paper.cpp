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
    ll a,b,cnt =0;
    cin >> a >> b;

    while(a%b!=0)
    {
        cnt += a/b;
        a %= b;
        swap(a,b);
    }

    cnt += a/b;
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve() << endl;

    return 0;
}
