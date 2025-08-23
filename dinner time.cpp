#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool solve()
{
    int n,m,p,q;
    cin >> n >> m >> p >> q;

    if(n%p==0)
    {
        if(m==(q*(n/p)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return true;
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

