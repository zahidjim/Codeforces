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

    vec.erase(unique(vec.begin(),vec.end()),vec.end());

    int res = 0;

    for(int i=0;i<vec.size();++i)
    {
        if(res<vec[i])
        {
            return res;
        }
        else
        {
            ++res;
        }
    }
    return res;
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

