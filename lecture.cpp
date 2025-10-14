#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    int n,m;
    cin >> n >> m;

    string str,stt;

    unordered_map<string,string>mape;

    while(m--)
    {
        cin >> str >> stt;
        mape.insert({str,stt});
    }

    vector<string>vec;

    vec.reserve(n);

    while(n--)
    {
        cin >> str;
        stt = mape[str];
        if(str.size()>stt.size())
        {
            vec.push_back(stt);
        }
        else
        {
            vec.push_back(str);
        }
    }
    n = vec.size();
    for(int i=0;i<n;++i)
    {
        cout << vec[i] << ' ';
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

