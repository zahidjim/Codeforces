#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n;
    string str;
    cin >> n >> str;

    int con=1,res=1;

    for(int i=1;i<n;++i)
    {
        if(str[i]==str[i-1])
        {
            ++con;
        }
        else
        {
            res = max(res,con);
            con = 1;
        }
    }

    res = max(res,con);

    return res+1;
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

