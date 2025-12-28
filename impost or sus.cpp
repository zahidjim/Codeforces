#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int solve()
{
    string str;
    cin >> str;

    int cnt = 0,n = str.size();

    if(str.front()=='u')
    {
        str.front() = 's';
        ++cnt;
    }
    if(str.back()=='u')
    {
        str.back() = 's';
        ++cnt;
    }

    vector<int>vec;

    vec.reserve(n);

    vec.push_back(0);

    for(int i=1;i<n;++i)
    {
        if(str[i]=='s')
        {
            if(vec.back()!=0)
            {
                vec.push_back(0);
            }
        }
        else
        {
            if(vec.back()==0)
            {
                vec.push_back(1);
            }
            else
            {
                ++vec.back();
            }
        }
    }

    n = vec.size();

    for(int i=1;i<n;++i)
    {
        if(vec[i]>0)
        {
            cnt += (vec[i]/2);
        }
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}

