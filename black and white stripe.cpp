#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n,k;
    cin >> n >> k;

    vector<int>vec(n,0);

    string str;
    cin >> str;

    vec[0] = (str[0]=='W');

    for(int i=1;i<n;++i)
    {
        vec[i] = vec[i-1]+(str[i]=='W');
    }

    int mn = 200000;

    if(k==1)
    {
        return (vec[n-1]==n);
    }

    for(int i=0;i<=(n-k);++i)
    {
        mn = min(mn,vec[i+k-1]-vec[i] + (str[i]=='W'));
    }

    return mn;
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

