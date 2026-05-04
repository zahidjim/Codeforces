#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' ';} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
void solve()
{
    int n,temp;
    cin >> n;
    vector<int>div,ndiv,div2,div3;
    for(int i=0; i<n; ++i)
    {
        cin >> temp;
        if(temp%6==0)
        {
            div.emplace_back(temp);
        }
        else if(temp%2==0)
        {
            div2.emplace_back(temp);
        }
        else if(temp%3==0)
        {
            div3.emplace_back(temp);
        }
        else
        {
            ndiv.emplace_back(temp);
        }
    }

    rsort(div);

    sortt(ndiv);

    show(div);
    show(div2);
    show(ndiv);
    show(div3);
    cout << endl;
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
