#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool solve()
{
    int n,cnt=0;
    cin >> n;

    int arr[n],brr[n];

    for(int i=0;i<n;++i)
    {
        cin >> arr[i];
    }

    for(int i=0;i<n;++i)
    {
        cin >> brr[i];
        if(brr[i]==arr[i])
        {
            ++cnt;
        }
    }

    if(cnt==n)
    {
        return true;
    }

    cnt = 0;

    for(int i=0;i<n;++i)
    {
        if(brr[i]==arr[n-1-i])
        {
            ++cnt;
        }
    }

    return (cnt==n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        cout << (solve()?"Bob":"Alice") << endl;
    }
    return 0;
}

