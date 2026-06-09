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
    int n,cur = 1;
    cin >> n;

    if(n&1)
    {
        cout << "1 1 2 1 2 3 1 3 2 2 3 3 ";
        cur = 4;
    }

    while(cur<n)
    {
        cout << cur << ' ';
        cout << cur+1 << ' ';
        cout << cur << ' ';
        cout << cur+1 << ' ';
        cout << cur+1 << ' ';
        cout << cur << ' ';
        cout << cur << ' ';
        cout << cur+1 << ' ';
        cur += 2;
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

