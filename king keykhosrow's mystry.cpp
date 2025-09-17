#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int a,b;
    cin >> a >> b;

    return (a*b)/__gcd(a,b);
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

