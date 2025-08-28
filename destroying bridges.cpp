#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n,k;
    cin >> n >> k;

    if(k>=(n-1))
    {
        return 1;
    }
    else
    {
        return n;
    }
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

