#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
bool solve()
{
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;

    int f = 0, s = 0;

    for(int i=0;i<n;++i)
    {
        if(i&1)
        {
            s += (a[i]=='1');
            f += (b[i]=='1');
        }
        else
        {
            f += (a[i]=='1');
            s += (b[i]=='1');
        }
    }

    if(n&1)
    {
        return (f<=n/2 && s<=(n+1)/2);
    }
    else
    {
        return (f<=n/2 && s<=n/2);
    }
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
