#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
bool solve()
{
    string str;
    cin >> str;

    int n = str.size(),cnt=0;

    for(int i=0;i<n;++i)
    {
        if(str[i]=='Y')
        {
            ++cnt;
        }
    }
    return (cnt<2);
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

