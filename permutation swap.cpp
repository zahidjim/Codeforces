#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int solve()
{
    int n,ans=0,temp;
    cin >> n;

    for(int i=1;i<=n;++i)
    {
        cin >> temp;
        if(i!=temp)
        {
            ans = __gcd(ans,abs(i-temp));
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

