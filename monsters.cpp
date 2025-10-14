#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
char solve()
{
    int n,k;
    cin >> n >> k;

    vector<int>vec(n);

    for(int i=0;i<n;++i)
    {
        cin >> vec[i];
        vec[i] %= k;

        if(!vec[i])
        {
            vec[i] = k;
        }
    }

    vector<int>ord(n);

    iota(ord.begin(),ord.end(),0);

    stable_sort(ord.begin(),ord.end(), [&](int i, int j)
    {
        return vec[i]>vec[j];
    });

    for(int i=0;i<n;++i)
    {
        cout << ord[i]+1 << ' ';
    }
    return 10;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        cout << solve();
    }
    return 0;
}

