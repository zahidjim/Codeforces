#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void show(int zero, int one, int two)
{
    for(int i=0;i<zero;++i)
    {
        cout << 0 << ' ';
    }
    for(int i=0;i<two;++i)
    {
        cout << 2 << ' ';
    }
    for(int i=0;i<one;++i)
    {
        cout << 1 << ' ';
    }
    cout << endl;
    return;
}
void solve()
{
    int n,s,sum=0,one=0,two=0,zero=0;
    cin >> n >> s;
    int arr[n];

    for(int i=0;i<n;++i)
    {
        cin >> arr[i];
        if(arr[i]==0)
        {
            ++zero;
        }
        else if(arr[i]==1)
        {
            ++one;
        }
        else
        {
            ++two;
        }
        sum += arr[i];
    }

    int diff = s - sum;

    if(sum>s || zero==n)
    {
        show(zero,one,two);
    }
    else if(sum==s)
    {
        cout << -1 << endl;
    }
    else
    {
        if(one==0 && !(diff&1))
        {
            cout << -1 << endl;
        }
        else if(diff>1)
        {
            cout << -1 << endl;
        }
        else
        {
            show(zero,one,two);
        }
    }
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
