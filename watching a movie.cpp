#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n,x,b=1,c,d,cnt=0;

    cin >> n >> x;
    while(n--)
    {
        cin >> c >> d;

        c -= (c-b)%x;

        cnt += (d-c+1);

        b = d+1;
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve() << endl;
    return 0;
}

