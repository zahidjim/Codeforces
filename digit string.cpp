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
    string str;
    cin >> str;
    int ans=0,mn = 1e9,n=str.size();
    vector<int>pre(n,0),suf(n,0);
    for(int i=0;i<n;++i)
    {
        if(str[i]=='4')
        {
            ++ans;
        }
        else if(str[i]=='1' || str[i]=='3')
        {
            ++pre[i];
        }
        else
        {
            ++suf[i];
        }
        if(i!=0)
        {
            pre[i] += pre[i-1];
        }
    }
    for(int i=n-2;i>=0;--i)
    {
        suf[i] += suf[i+1];
    }

    for(int i=0;i<n;++i)
    {
        if(str[i]=='3' || str[i]=='1')
        {
            if(suf[i]==0)
            {
                if(i==0)
                {
                    pre[i] = 0;
                }
                else
                {
                    pre[i] = pre[i-1];
                }
            }
        }
    }

    for(int i=n-1;i>=0;--i)
    {
        if(str[i]=='2')
        {
            if(pre[i]==0)
            {
                if(i==(n-1))
                {
                    suf[i] = 0;
                }
                else
                {
                    suf[i] = suf[i+1];
                }
            }
        }
    }

    for(int i=0;i<n-1;++i)
    {
        mn = min(mn,pre[i]+suf[i+1]);
    }

    return ans+min({mn,suf.front(),pre.back()});
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
