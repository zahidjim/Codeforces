#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int a,b;
    cin >> a >> b;

    if(a>b)
    {
        swap(a,b);
    }

    if(a==b)
    {
        return 0;
    }
    else if(b%a==0)
    {
        return 1;
    }
    else
    {
        return 2;
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

