#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
void solve()
{
    int n,x,s,e;
    cin >> n >> x;
    vector<pair<int,int>>vec(n);

    for(int i=0;i<n;++i)
    {
        cin >> vec[i].first;
        vec[i].second = i+1;
    }

    sortt(vec);

    s = 0, e = n-1;
    while(s<e)
    {
        n = vec[s].first + vec[e].first;
        if(n==x)
        {
            cout << vec[s].second << ' ' << vec[e].second << endl;
            return;
        }
        else if(n>x)
        {
            --e;
        }
        else
        {
            ++s;
        }
    }
    cout << -1 << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    solve();

    return 0;
}
