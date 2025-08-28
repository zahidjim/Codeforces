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

    sort(vec.begin(), vec.end());

    int i = (n-1)/2,cnt = 0,temp = vec[i];

    while(i<n && vec[i]==temp)
    {
        ++cnt;
        ++i;
    }

    return cnt;
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

