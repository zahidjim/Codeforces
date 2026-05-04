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
ll solve()
{
    ll n,l,r,temp,lsum=0,rsum=0;
    cin >> n >> l >> r;

    --l;
    --r;

    vector<ll>arr,left,right;

    for(ll i=0;i<n;++i)
    {
        cin >> temp;
        if(i>=l && i<=r)
        {
            arr.emplace_back(temp);
            lsum += temp;
            rsum += temp;
        }
        else if(i<l)
        {
            left.emplace_back(temp);
        }
        else
        {
            right.emplace_back(temp);
        }
    }

    sortt(left);
    sortt(right);
    rsort(arr);

    n = min(arr.size(),left.size());

    for(ll i=0;i<n;++i)
    {
        temp = arr[i] - left[i];
        if(temp>0)
        {
            lsum -= temp;
        }
        else
        {
            break;
        }
    }

    n = min(arr.size(),right.size());

    for(ll i=0;i<n;++i)
    {
        temp = arr[i] - right[i];
        if(temp>0)
        {
            rsum -= temp;
        }
        else
        {
            break;
        }
    }

    return min(lsum,rsum);
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
