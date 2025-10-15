#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    int n,temp;
    cin >> n;
    map<int,int>mape;

    while(n--)
    {
        cin >> temp;
        ++mape[temp];
    }

    int mx = 0;

    for(auto [a,b]: mape)
    {
        mx = max(mx,b);
    }

    cout << mx << ' ' << mape.size() << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    solve();

    return 0;
}

