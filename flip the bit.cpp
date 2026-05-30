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
    int n,k,ans=0,l=1e9,r=-1,p,temp;
    cin >> n >> k;
    vector<int>vec(n);
    take(vec);
    cin >> p;

    --p;

    k = vec[p];

    for(int i=0;i<p;++i)
    {
        if(vec[i]!=k)
        {
            l = i;
            break;
        }
    }

    for(int i=n-1;i>p;--i)
    {
        if(vec[i]!=k)
        {
            r = i;
            break;
        }
    }

    l = min(l,p);
    r = max(r,p);

    while(l<r)
    {
        if(l!=p)
        {
            temp = vec[l];
            while(vec[l]==temp)
            {
                ++l;
                if(l==p)
                {
                    break;
                }
            }
        }
        if(r!=p)
        {
            temp = vec[r];
            while(vec[r]==temp)
            {
                --r;
                if(r==p)
                {
                    break;
                }
            }
        }
        ++ans;
    }
    ans += (ans&1);
    return ans;
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
