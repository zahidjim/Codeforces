#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool solve()
{
    int n,b,r;
    cin >> n >> r >> b;

    if(b>r)
    {
        r = (b&1);
    }

    if(b==0)
    {
        return ((n&1)==(r&1));
    }
    else
    {
       return ((n&1)==(b&1) && (b&1)==(r&1));
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
        cout << (solve()?"YES":"NO") << endl;
    }
    return 0;
}

