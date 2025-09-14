#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int x,n;
    cin >> x >> n;

    return x*(n&1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}

