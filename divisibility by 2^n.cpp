#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int factor(int n)
{
    int cnt = 0;
    while(!(n&1))
    {
        n /= 2;
        ++cnt;
    }
    return cnt;
}
int solve()
{
    int n,temp,genuine=0,mod,modc=0;
    cin >> n;

    vector<int>vec;

    vec.reserve(n);

    for(int i=1;i<=n;++i)
    {
        cin >> temp;

        genuine += factor(temp);

        mod = factor(i);

        if(mod)
        {
            vec.push_back(mod);
            modc += mod;
        }
    }

    if(genuine>=n)
    {
        return 0;
    }
    else
    {
        if((genuine+modc)<n)
        {
            return -1;
        }
        else
        {
            sort(vec.rbegin(),vec.rend());
            int si = vec.size(),i=0;

            for(;i<si && genuine<n;++i)
            {
                genuine += vec[i];
            }
            return i;
        }
    }
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

