#include<iostream>
using namespace std;
int solve()
{
    int n,m,cnt = 0;
    cin >> n >> m;

    int a=0,b=0,a1,b1;

    for(int i=0;i<n;++i)
    {
        cin >> a1 >> b1;

        cnt += ((a1-a) - (((a1-a)&1)^(b1^b)));

        a = a1, b = b1;
    }

    cnt += (m-a);

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
        cout << solve() << '\n';
    }
    return 0;
}

