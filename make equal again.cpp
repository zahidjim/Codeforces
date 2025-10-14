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

    int left=1,right=1;

    for(int i=1;i<n;++i)
    {
        if(vec[i]==vec[i-1])
        {
            ++left;
        }
        else
        {
            break;
        }
    }

    for(int i=n-2;i>=0;--i)
    {
        if(vec[i]==vec[i+1])
        {
            ++right;
        }
        else
        {
            break;
        }
    }

    if(left==n)
    {
        right=0;
    }

    if(vec.front()==vec.back())
    {
        return (n-(left+right));
    }
    else
    {
        return (n-max(left,right));
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

