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
int fmex(vector<int>vec,int l, int r)
{
    map<int,int>mape;

    int a = l, b = r,n = vec.size();

    while(r>=l)
    {
        if(vec[l]==vec[r])
        {
            mape[vec[l]] = 1;
        }
        else
        {
            return -1;
        }
        --r;
        ++l;
    }

    r = b+1;
    l = a-1;

    while(l>-1 && r<n)
    {
        if(vec[l]==vec[r])
        {
            mape[vec[l]] = 1;
        }
        else
        {
            break;
        }
        --l;
        ++r;
    }

    int mex = 0;
    while(true)
    {
        if(mape.count(mex)==1)
        {
            ++mex;
        }
        else
        {
            return mex;
        }
    }
}
int check(vector<int>vec,int l, int r)
{
    map<int,int>mape;

    mape[0] = 1;

    int n = vec.size(),ans = 0;
    while(l>-1 && r<n)
    {
        if(vec[l]==vec[r])
        {
            mape[vec[l]] = 1;
        }
        else
        {
            break;
        }
        --l;
        ++r;
    }
    while(true)
    {
        if(mape.count(ans)==1)
        {
            ++ans;
        }
        else
        {
            return ans;
        }
    }
}
int solve()
{
    int n,l,r,ans = 1;
    cin >> n;
    n *= 2;
    vector<int>vec(n);

    take(vec);

    for(int i=0;i<n;++i)
    {
        if(vec[i]==0)
        {
            l = i;
            break;
        }
    }

    for(int i=n-1;i>=0;--i)
    {
        if(vec[i]==0)
        {
            r = i;
            break;
        }
    }

    if((r-l)>1)
    {
        ans = max(check(vec,l-1,l+1),check(vec,r-1,r+1));
    }
    else
    {
        ans = check(vec,l-1,r+1);
    }

    ans = max(ans,fmex(vec,l,r));

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
