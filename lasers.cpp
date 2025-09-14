#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n,m,x,y,temp;
    cin >> n >> m >> x >> y;

    x = n+m;
    y = x;
    while(x--)
    {
        cin >> temp;
    }

    return y;
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

