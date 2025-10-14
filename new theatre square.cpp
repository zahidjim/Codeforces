#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n,m,x,y,cnt = 0;
    cin >> n >> m >> x >> y;

    string str;

    while(n--)
    {
        cin >> str;

        if(m==1)
        {
            if(str[0]=='.')
            {
                cnt += x;
            }
        }
        else
        {
            for(int i=0;i<m;++i)
            {
                if(str[i]=='.')
                {
                    if(str[i+1]=='.')
                    {
                        cnt += min(2*x,y);
                        ++i;
                    }
                    else
                    {
                        cnt += x;
                    }
                }
            }
        }
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

