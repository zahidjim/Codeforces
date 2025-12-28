#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
string solve()
{
    int a=0,b=0,c=0,n,k;
    cin >> n >> k;

    string str,stt(n,'+');
    cin >> str;

    if(n==k)
    {
        string s(n,'-');
        return s;
    }

    for(int i=0;i<k;++i)
    {
        if(str[i]=='0')
        {
            ++a;
        }
        else if(str[i]=='1')
        {
            ++b;
        }
        else
        {
            ++c;
        }
    }

    for(int i=0;i<a;++i)
    {
        stt[i] = '-';
    }

    for(int i=0;i<b;++i)
    {
        stt[n-1-i] = '-';
    }

    int s = a, e = n-1-b;

    for(int i=0;i<c;++i)
    {
        stt[s++] = '?';
        stt[e--] = '?';
    }

    return stt;
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
