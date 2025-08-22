#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    int n,m,i=0;
    string a,b,c;

    cin >> n >> a >> m >> b >> c;

    while(i<m)
    {
        if(c[i]=='D')
        {
            a += b[i];
        }
        else
        {
            a = b[i]+a;
        }
        ++i;
    }
    cout << a << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

