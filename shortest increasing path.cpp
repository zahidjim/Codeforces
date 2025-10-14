#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int a,b;
    cin >> a >> b;

    if(b>a)
    {
        return 2;
    }
    else
    {
        if(b>1 && b<(a-1))
        {
            return 3;
        }
        else
        {
            return -1;
        }
    }
    return 0;
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

