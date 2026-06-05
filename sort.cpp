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
int query(vector<vector<int>>&pra, vector<vector<int>>&prb, string &a, string &b, int l, int r)
{
    vector<int>veca(26,0),vecb(26,0);

    for(int i=0;i<26;++i)
    {
        veca[i] = pra[i][r] - pra[i][l-1];
        vecb[i] = prb[i][r] - prb[i][l-1];
    }

    int cnt = 0;

    for(int i=0;i<26;++i)
    {
        if(vecb[i]>0)
        {
            cnt += min(vecb[i],veca[i]);
        }
    }
    return (r-l+1-cnt);
}
void solve()
{
    int n,q,l,r;
    cin >> n >> q;

    string a,b;
    cin >> a >> b;

    vector<vector<int>>pra(26),prb(26);

    for(int i=0;i<26;++i)
    {
        pra[i].push_back(0);
        prb[i].push_back(0);

        for(int j=1;j<=n;++j)
        {
            pra[i].push_back((a[j-1]==('a'+i))+pra[i][j-1]);
            prb[i].push_back((b[j-1]==('a'+i))+prb[i][j-1]);
        }
    }

    while(q--)
    {
        cin >> l >> r;
        cout << query(pra,prb,a,b,l,r) << endl;
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
