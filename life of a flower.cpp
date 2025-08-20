#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    bool life = true;
    int n;
    cin >> n;

    int arr[n],height=1;

    cin >> arr[0];

    height += (arr[0]==1);

    for(int i=1;i<n;++i)
    {
        cin >> arr[i];
        if(arr[i]==1)
        {
            if(arr[i-1]==0)
            {
                ++height;
            }
            else
            {
                height += 5;
            }
        }
        else
        {
            if(arr[i-1]==0)
            {
                life = false;
            }
        }
    }

    if(life)
    {
        return height;
    }
    else
    {
        return -1;
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

