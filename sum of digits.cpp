#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    string str;
    cin >> str;

    int n,cnt=0;

    while(str.size()>1)
    {
        n=0;
        for(int i=0; i<str.size(); ++i)
        {
            n += (str[i]-48);
        }
        str = to_string(n);
        ++cnt;
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cout << solve() << endl;

    return 0;
}

