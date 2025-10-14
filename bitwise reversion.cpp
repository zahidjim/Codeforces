#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool solve()
{
    int a,b,c;
    cin >> a >> b >> c;

    return ((a&b)==(b&c) && (b&c)==(c&a));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        cout << (solve()?"YES":"NO") << endl;
    }
    return 0;
}

