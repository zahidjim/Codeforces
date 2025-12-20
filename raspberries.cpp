#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int solve()
{
    int n,k,mn = 10,temp,even = 0;
    cin >> n >> k;

    while(n--)
    {
        cin >> temp;
        mn = min(mn,(k-temp%k)*(temp%k!=0));

        if(k==4)
        {
            if(!(temp&1))
            {
                if(temp==4 || temp==8)
                {
                    even = 2;
                }
                else
                {
                    ++even;
                }
            }
        }
    }

    if(k==4)
    {
        if(even<2)
        {
            return min(mn,2-even);
        }
        else
        {
            return 0;
        }
    }

    return mn;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}

