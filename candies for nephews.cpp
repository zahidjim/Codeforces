#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n;
    cin >> n;

    n %= 3;
    if(n)
    {
        return 3-n;
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

