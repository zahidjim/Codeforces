#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if(a>b)
    {
        swap(a,b);
        swap(c,d);
    }

    d -= b;
    c -= a;

    if(c>d)
    {
        swap(c,d);
    }

    if(b>2*(a+1) || d>2*(c+1))
    {
        return false;
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

