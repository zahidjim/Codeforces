#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n,k,temp=0;
    cin >> n >> k;

    vector<int>vec(n);

    for(int i=0;i<n;++i)
    {
        cin >> vec[i];
        if(vec[i]==k)
        {
            ++temp;
        }
    }

    sort(vec.begin(),vec.end());

    vec.erase(unique(vec.begin(),vec.end()),vec.end());

    int cnt = 0;

    n = vec.size();
    for(int i=0;i<n;++i)
    {
        if(vec[i]<k)
        {
            ++cnt;
        }
    }


    cnt = k - cnt;

    return max(temp,cnt);
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

