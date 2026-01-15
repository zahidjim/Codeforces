#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int solve()
{
    int n,x,l=0,r=0;
    cin >> n >> x;

    string str;
    cin >> str;

    for(int i=x-2;i>=0;--i)
    {
        if(str[i]=='#')
        {
            l = i+2;
            break;
        }
    }

    for(int i=x;i<n;++i)
    {
        if(str[i]=='#')
        {
            r = n-i+1;
            break;
        }
    }

    if(l==0 && r==0)
    {
        return 1;
    }
    else
    {
        return max(min(x,r),min(l,n-x+1));
    }
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
