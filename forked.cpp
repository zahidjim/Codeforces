#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int solve()
{
    int a,b,c,d,x,y;
    cin >> a >> b >> c >> d >> x >> y;

    if(abs(a+b)==abs(d-y) || abs(c-x)==(a+b))
    {
        if(a==b)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}

