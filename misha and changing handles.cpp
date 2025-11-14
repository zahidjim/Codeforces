#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<string>vec;
    vec.reserve(n);
    map<string,string>mape;
    string s,t;
    while(n--)
    {
        cin >> s >> t;
        mape[s] = t;
        vec.push_back(s);
    }

    for(auto &x: vec)
    {
        s = x,t = mape[s];

        while(mape.count(t))
        {
            t = mape[t];
        }

        mape[s] = t;
    }
    n = vec.size();
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(mape[vec[i]]==mape[vec[j]])
            {
                vec.erase(vec.begin()+j);
                --n;
                --j;
            }
        }
    }
    cout << n << endl;
    for(auto &x: vec)
    {
        cout << x << ' ' << mape[x] << endl;
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
