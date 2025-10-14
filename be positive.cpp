#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n,temp,cnt=0,neg=0;
    cin >> n;

    while(n--)
    {
        cin >> temp;
        if(temp==-1)
        {
            ++neg;
        }
        else if(temp==0)
        {
            ++cnt;
        }
    }
    if(neg&1)
    {
        cnt += 2;
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

