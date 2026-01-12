#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
ll solve()
{
    ll n,temp,sum = 0,neg = 0,mn = INT_MAX;
    cin >> n;

    while(n--)
    {
        cin >> temp;
        if(temp<0)
        {
            ++neg;
            temp *= -1;
        }
        mn = min(mn,temp);
        sum += temp;
    }

    return sum - mn*(neg&1)*2;
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

