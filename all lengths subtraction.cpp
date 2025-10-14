#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool solve()
{
    int cnt=0,n,tc;
    cin >> n;
    vector<int>vec(n);

    for(int i=0;i<n;++i)
    {
        cin >> vec[i];
    }

    if(n<3)
    {
        return true;
    }

    --n;
    for(int i=1;i<n;++i)
    {
        if((vec[i-1]>vec[i]) && (vec[i+1]>vec[i]))
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

