#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    string str;
    cin >> str;

    int a,b,i=1;

    a = str[0]-48;

    while(str[i]=='0')
    {
        a *= 10;
        ++i;
    }

    b = str[i]-48;
    ++i;
    while(i<str.size())
    {
        b = b*10 + str[i]-48;
        ++i;
    }

    if(b>a)
    {
        cout << a << ' ' << b;
    }
    else
    {
        cout << -1;
    }
    cout << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

