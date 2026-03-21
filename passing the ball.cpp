#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
int solve()
{
    int n = 1,cur = 0;
    string str;
    cin >> n >> str;
    map<int,int>mape;
    ++mape[cur];

    for(int i=0;i<n;++i)
    {
        if(str[cur]=='R')
        {
            ++cur;
        }
        else
        {
            --cur;
        }
        ++mape[cur];
    }
    return mape.size();
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
