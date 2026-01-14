#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;

    for(int i=0; i<=n; ++i)
    {
        for(int j=0; j<2*(n-i); ++j)
        {
            cout << ' ';
        }

        for(int j=0; j<=i; ++j)
        {
            cout << j;
            if(i!=0)
            {
                cout << ' ';
            }
        }

        for(int j=i-1; j>=0; --j)
        {
            cout << j;
            if(j>0)
            {
                cout << ' ';
            }
        }
        cout << endl;
    }

    for(int i=n-1; i>=0; --i)
    {
        for(int j=0; j<2*(n-i); ++j)
        {
            cout << ' ';
        }

        for(int j=0; j<=i; ++j)
        {
            cout << j;
            if(i>0)
            {
                cout << ' ';
            }
        }

        for(int j=i-1; j>=0; --j)
        {
            cout << j;
            if(j>0)
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
