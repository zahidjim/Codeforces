#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
bool solve()
{
    int n,temp;
    cin >> n;

    map<int,int>mape;

    for(int i=0;i<n;++i)
    {
        cin >> temp;
        ++mape[temp];
    }

    int s = mape.size();

    if(s>2)
    {
        return false;
    }
    else if(s==1)
    {
        return true;
    }

    for(auto [a,b]: mape)
    {
        if(b>(n+1)/2)
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

    int t=1;
    cin >> t;
    while(t--)
    {
        cout << (solve()?"YES":"NO") << endl;
    }
    return 0;
}
