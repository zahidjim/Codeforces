#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n,temp;
    cin >> n;

    unordered_map<int,int>mape;

    while(n--)
    {
        cin >> temp;
        ++mape[temp];
    }
    return mape.size();
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

