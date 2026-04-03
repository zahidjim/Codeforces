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
    int n,m;
    cin >> n >> m;
    vector<int>vec(m);
    take(vec);
    sortt(vec);

    if(!vec.empty())
    {
        if(vec[0]==1)
        {
            return false;
        }
    }

    for(int i=0; i<m; ++i)
    {
        if(vec[i]==n)
        {
            return false;
        }
    }

    for(int i=0; i<m-2; ++i)
    {
        if(vec[i]>=n)
        {
            break;
        }
        if((vec[i+1]-vec[i])==1 && (vec[i+2]-vec[i])==2)
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

    cout << (solve()?"YES":"NO") << endl;

    return 0;
}
