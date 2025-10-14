#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n;
    cin >> n;
    vector<int>vec(n);
    for(int i=0;i<n;++i)
    {
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());

    int mx = 0;

    for(int i=n-1;i>0;i-=2)
    {
        mx = max(mx,vec[i]-vec[i-1]);
    }
    return mx;
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

