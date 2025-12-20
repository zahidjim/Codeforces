#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<string>vec(n);

    string str = "";

    for(int i=0;i<n;++i)
    {
        cin >> vec[i];

        str = min(str+vec[i],vec[i]+str);
    }

    cout << str << endl;
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
