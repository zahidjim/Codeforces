#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
void solve()
{
    int n;
    string str;
    cin >> n >> str;

    bool check = true;

    for(int i=0;i<n/2;++i)
    {
        if(str[i]!=str[n-i-1])
        {
            check = false;
            break;
        }
    }

    if(check)
    {
        cout << 0 << endl;
        return;
    }

    if(n==1)
    {
        cout << -1 << endl;
        return;
    }

    vector<int>vec;

    vec.reserve(n);

    for(int i=0;i<n;++i)
    {
        if(str[i]=='0')
        {
            vec.push_back(i+1);
        }
    }

    cout << vec.size() << endl;

    for(auto &a: vec)
    {
        cout << a << ' ';
    }
    cout << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
