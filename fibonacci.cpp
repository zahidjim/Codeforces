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
    ll a=0,b=1,n,c;
    cin >> n;
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }

    n -= 2;
    while(n--)
    {
        c = b;
        b = a+b;
        a = c;
    }
    return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve() << endl;

    return 0;
}
