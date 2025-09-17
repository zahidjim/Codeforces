#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
ll solve()
{
    ll a,b;
    cin >> a >> b;

    if(b&1)
    {
        if(a&1)
        {
            return a*b+1;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        if((a&1) && (b/2)&1)
        {
            return -1;
        }
        else
        {
            return a*(b/2)+2;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}

