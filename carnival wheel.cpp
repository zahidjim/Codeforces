#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int solve()
{
    int l,a,b,mx = 0;
    cin >> l >> a >> b;

    l -= a;

    if(l>b)
    {
        return b*(l/b);
    }
    else
    {
        if(b%l==0)
        {
            return a;
        }
        else
        {
            return l-1;
        }
    }
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

