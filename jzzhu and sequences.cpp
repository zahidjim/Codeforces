#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
ll solve()
{
    ll x,y,n,temp;
    cin >> x >> y >> n;

    temp = n%6;

    if(temp==2)
    {
        x = y;
    }
    else if(temp==3)
    {
        x = y-x;
    }
    else if(temp==4)
    {
        x = -x;
    }
    else if(temp==5)
    {
        x = -y;
    }
    else if(temp==0)
    {
        x = x-y;
    }

    return ((x%1000000007)+1000000007)%1000000007;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve() << endl;

    return 0;
}
