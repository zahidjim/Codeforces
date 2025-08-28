#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n,mx=0;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin >> arr[i];
        mx = max(mx,arr[i]);
    }

    if(arr[n-1]==mx)
    {
        return 0;
    }

    int cnt = 1,pointer=arr[n-1];

    for(int i=n-1; i>=0; --i)
    {
        if(arr[i]==mx)
        {
            break;
        }
        else if(arr[i]>pointer)
        {
            ++cnt;
            pointer = arr[i];
        }
    }

    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}

