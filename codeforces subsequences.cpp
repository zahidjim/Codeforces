#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
ll power(ll a, ll b)
{
    ll ret = 1;
    while(b--)
    {
        ret *= a;
    }
    return ret;
}
using namespace std;
void solve()
{
    ll n,m=1,mbig=1,t=1,res;
    cin >> n;

    if(n==1)
    {
        cout << "codeforces" << endl;
        return;
    }

    res = power(mbig,10);

    while(res<n)
    {
        ++mbig;
        res= power(mbig,10);
    }

    if(res==n)
    {
        m = mbig;
    }
    else
    {
        m = mbig-1;
    }

    while((power(mbig,t)*power(m,10-t))<n)
    {
        ++t;
    }

    ll grade = mbig;

    string str = "", stt = "codeforces";

    for(ll i=0;i<t;++i)
    {
        grade = mbig;
        while(grade--)
        {
            str += stt[i];
        }
    }

    for(ll i=t;i<10;++i)
    {
        grade = m;
        while(grade--)
        {
            str += stt[i];
        }
    }

    cout << str << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
//    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
