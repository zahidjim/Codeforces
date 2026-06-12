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
    int n,k,zero=0,one=0;
    cin >> n >> k;
    string str;
    cin >> str;

    map<int,int>mape;

    for(int i=0;i<n;++i)
    {
        if(str[i]=='1')
        {
            ++one;
            ++mape[(i+1)%k];
        }
        else
        {
            ++zero;
        }
    }

    if(one==0)
    {
        return true;
    }
    else if(one&1)
    {
        return false;
    }
    else
    {
        for(auto [a,b]:mape)
        {
            if(b&1)
            {
                return false;
            }
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
