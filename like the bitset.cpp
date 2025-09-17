#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;
    string str;
    cin >> str;

    int large = n, small = 1,cont=(str[0]=='1');

    if(cont==k)
    {
        cout << "NO" << endl;
        return;
    }

    for(int i=1;i<n;++i)
    {
        if(str[i]=='0')
        {
            cont = (cont>0);
        }
        else if(str[i]=='1')
        {
            if(str[i-1]=='1')
            {
                ++cont;
            }
            else
            {
                cont = 1;
            }
        }
        if(cont==k)
        {
            cout << "NO" << endl;
            return;
        }

    }

    int i=0,j=n-1;

    vector<int>vec(n);

    while(i<n)
    {
        if(str[i]=='0')
        {
            vec[i] = large;
            --large;
        }
        if(str[j]=='1')
        {
            vec[j] = small;
            ++small;
        }
        ++i;
        --j;
    }

    cout << "YES" << endl;
    for(i=0;i<n;++i)
    {
        cout << vec[i] << ' ';
    }
    cout << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

