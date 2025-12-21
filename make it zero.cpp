#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
void solve()
{
    int n,temp;
    cin >> n;

    for(int i=0;i<n;++i)
    {
        cin >> temp;
    }

    if(n&1)
    {
        cout << 4 << endl;
        cout << 1 << ' ' << n << endl;
        cout << 1 << ' ' << n-1 << endl;
        cout << n-1 << ' ' << n << endl;
        cout << 1 << ' ' << n << endl;
    }
    else
    {
        cout << 2 << endl;
        cout << 1 << ' ' << n << endl;
        cout << 1 << ' ' << n << endl;
    }

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
