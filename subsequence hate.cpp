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
int optimum(string str, char a)
{
    int n= str.size(), mn = 1e9;
    vector<int>pre(n,0),suf(n,0);
    char b;
    if(a=='1')
    {
        b = '0';
    }
    else
    {
        b = '1';
    }

    pre.front()=(str.front()!=a);
    suf.back()=(str.back()!=b);

    for(int i=1;i<n;++i)
    {
        pre[i] = pre[i-1];
        pre[i] += (str[i]!=a);
    }

    for(int j=n-2;j>=0;--j)
    {
        suf[j] = suf[j+1];
        suf[j] += (str[j]!=b);
    }

    for(int i=0;i<n-1;++i)
    {
        mn = min(mn,pre[i]+suf[i+1]);
    }

    return mn;
}
int solve()
{
    string str;
    cin >> str;
    int n=str.size(),mn = 1e9;
    if(n<3)
    {
        return 0;
    }

    return min({optimum(str,'1'),optimum(str,'0'),(int)count(str.begin(),str.end(),'0'),(int)count(str.begin(),str.end(),'1')});
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
