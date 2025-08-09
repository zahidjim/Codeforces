#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool solve()
{
    int n,temp;
    cin >> n;

    vector<int>vec;
    vec.reserve(n);

    while(n--)
    {
        cin >> temp;
        if(temp!=-1)
        {
            vec.emplace_back(temp);
        }
    }

    sort(vec.begin(),vec.end());

    if(!
       vec.empty() && vec[0]==0)
    {
        return false;
    }

    n = vec.size();
    for(int i=1;i<n;++i)
    {
        if(vec[i]!=vec[i-1])
        {
            return false;
        }
    }

    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        cout << (solve()?"YES":"NO") << endl;
    }
    return 0;
}
