#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
bsearch(vector<ll>&vec,ll key)
{
    ll s = 0, e = vec.size()-1,mid,ans = 0;

    while(s<=e)
    {
        mid = (s+e)/2;
        if(vec[mid]<=key)
        {
            ans = mid+1;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }
    return ans;
}
void solve()
{
    ll n,temp,x;
    cin >> n >> x;
    vector<ll>vec(n);

    take(vec);

    sortt(vec);

    while(x--)
    {
        cin >> temp;
        cout << bsearch(vec,temp) << ' ';
    }
    cout << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

