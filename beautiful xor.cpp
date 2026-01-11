#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
void solve()
{
    int a,b,d;
    cin >> a >> b;

    int c = (a^b);

    if(b==a)
    {
        cout << 0 << endl;
    }
    else if(c<a)
    {
        cout << 1 << endl << c << endl;
        return;
    }
    else
    {
        int la=floor(log(a)/log(2))+1;
        int lb=floor(log(b)/log(2))+1;

        if(la<lb)
        {
            cout << -1 << endl;
            return;
        }

        int lc=floor(log(c)/log(2))+1;

        vector<int>vec;

        for(int i=0;i<=lc;++i)
        {
            d = (1<<i);
            if(c&d)
            {
                vec.push_back(d);
            }
        }

        cout << vec.size() << endl;
        for(auto &f: vec)
        {
            cout << f << ' ';
        }
        cout << endl;
        return;
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
        solve();
    }
    return 0;
}
