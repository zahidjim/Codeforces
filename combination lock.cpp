#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    if(!(n&1))
    {
        cout << -1 << endl;
        return;
    }

    for(int i=1;i<n;++i)
    {
        cout << n-i << ' ';
    }
    cout << n << endl;
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
