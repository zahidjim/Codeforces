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
ll step1(ll a, ll b)
{
    return (a-b);
}
ll step2(ll a, ll b, ll x)
{
    ll cnt = 0;
    while((a/x)>=b && x!=1)
    {
        a /= x;
        ++cnt;
    }

    cnt += (a-b);
    return cnt;
}
ll step3(ll a, ll b, ll x)
{
    if(x==1)
    {
        return 1e9;
    }
    map<ll,ll>arr,brr;

    vector<ll>vec,veb;

    arr[a] = 0;
    brr[b] = 0;

    vec.push_back(a);
    veb.push_back(b);

    ll cnt = 0,temp;

    while(a>0)
    {
        a /= x;
        ++cnt;
        arr[a] = cnt;
        vec.push_back(a);
    }

    cnt = 0;
    while(b>0)
    {
        b /= x;
        ++cnt;
        brr[b] = cnt;
        veb.push_back(b);
    }

    cnt = 1e9;

//    show(vec);
//    show(veb);

    for(ll i=0;i<vec.size();++i)
    {
        for(ll j=0;j<veb.size();++j)
        {
            temp = abs(vec[i]-veb[j])+arr[vec[i]]+brr[veb[j]];
//            cout << "temp = " << temp << endl;
            if(temp<cnt)
            {
                cnt = temp;
            }
        }
    }
    return cnt;
}
ll solve()
{
    ll a,b,x;
    cin >> a >> b >> x;

    if(b>a)
    {
        swap(a,b);
    }

//    cout << "step1 = " << step1(a,b) << endl;
//    cout << "step2 = " << step2(a,b,x) << endl;
//    cout << "step3 = " << step3(a,b,x) << endl;

    return min({step1(a,b),step2(a,b,x),step3(a,b,x)});
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
