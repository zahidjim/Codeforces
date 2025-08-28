#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n,mn,mx,k;
    cin >> n >> k;

    int arr[n];
    cin >> arr[0];

    mn = arr[0],mx = mn;

    for(int i=1;i<n;++i)
    {
        cin >> arr[i];

        if(arr[i]>mx)
        {
            mx = arr[i];
        }
        else if(arr[i]<mn)
        {
            mn = arr[i];
        }
    }

    if((mx-mn)>(2*k))
    {
        return -1;
    }
    else
    {
        return (mn+k);
    }
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

