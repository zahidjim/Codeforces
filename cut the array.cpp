#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    int n,a,b,c;
    cin >> n;

    vector<int>arr(n),brr(n+1);

    brr[0] = 0;

    for(int i=0;i<n;++i)
    {
        cin >> arr[i];
        brr[i+1] = brr[i] + arr[i];
    }

    for(int i=1;i<n;++i)
    {
        for(int j=i+1;j<=n;++j)
        {
            a = brr[i]%3;
            b = (brr[j]-brr[i])%3;
            c = (brr[n]-brr[j])%3;

            if((a==b && b==c) || (a!=b && a!=c && b!=c))
            {
                cout << i << ' ' << j << endl;
                return;
            }
        }
    }

    cout << "0 0" << endl;
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

