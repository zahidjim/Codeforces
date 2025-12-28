#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int solve()
{
    int n, temp, a = 3, b = 1, c = 2, d = 1, e = 1,ans = 0;

    cin >> n;

    for(int i=1; i<=n; ++i)
    {
        cin >> temp;

        if(temp==0)
        {
            --a;
        }
        else if(temp==1)
        {
            --b;
        }
        else if(temp==2)
        {
            --c;
        }
        else if(temp==3)
        {
            --d;
        }
        else if(temp==5)
        {
            --e;
        }

        if(ans==0 && a<=0 && b<=0 && c<=0 && d<=0 && e<=0)
        {
            ans = i;
        }
    }
    return ans;
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

