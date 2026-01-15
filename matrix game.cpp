#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int take(vector<int>&vec, int n)
{
    int sum = 0;
    for(int i=0;i<n;++i)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    return sum;
}
bool solve()
{
    int n,m,r=0,cnt, c=0;
    cin >> n >> m;
    vector<vector<int>>vec(n,vector<int>(m));

    for(int i=0;i<n;++i)
    {
        r += !take(vec[i],m);
    }

    for(int i=0;i<m;++i)
    {
        cnt = 0;
        for(int j=0;j<n;++j)
        {
            cnt += vec[j][i];
            if(cnt)
            {
                break;
            }
        }
        c += !cnt;
    }

    return (min(r,c)&1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        cout << (solve()?"Ashish":"Vivek") << endl;
    }
    return 0;
}
