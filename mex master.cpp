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
int solve()
{
    int n,zero=0,one=0,nzero=0;
    cin >> n;

    vector<int>vec(n);

    take(vec);

    for(int i=0;i<n;++i)
    {
        if(vec[i]==0)
        {
            ++zero;
        }
        else
        {
            ++nzero;
            if(vec[i]==1)
            {
                ++one;
            }
        }
    }

    if((zero-nzero)<=1)
    {
        return 0;
    }
    else if(one==nzero && one>0)
    {
        return 2;
    }
    else
    {
        return 1;
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
        cout << solve() << endl;
    }
    return 0;
}
