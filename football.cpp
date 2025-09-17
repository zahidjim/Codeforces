#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
string solve()
{
    int n,a=0,b=0;
    cin >> n;
    string str,temp,stt;

    cin >> temp;

    str = temp;
    a = 1;

    while(--n)
    {
        cin >> temp;

        if(temp==str)
        {
            ++a;
        }
        else
        {
            stt = temp;
            ++b;
        }
    }

    if(a>b)
    {
        return str;
    }
    else
    {
        return stt;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cout << solve() << endl;
    return 0;
}
