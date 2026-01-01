#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
bool solve()
{
    int n,cnt = 0;
    string str;

    cin >> n >> str;

    for(auto a: str)
    {
        if(a=='0')
        {
            ++cnt;
        }
    }
    return (cnt<=(n/2));
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

