#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;

    if(n==1)
    {
        cout << -1 << endl;
        return;
    }

    cout << 2;

    while(--n)
    {
        cout << 3;
    }
    cout << endl;
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

