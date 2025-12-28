#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
void solve()
{
    ll L,V,T,t,v;
    ll n;

    cin >> L >> V >> T >> n;

    while(n--)
    {
        cin >> t >> v;

        cout << 1 + (T-t)*abs(V-v)/L;

        if(n)
        {
            cout << ' ';
        }
    }
    cout << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
