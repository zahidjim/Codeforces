#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n;
    cin >> n;
    if((n&1) || (n<5))
    {
        return 0;
    }
    else
    {
        return n/4 - (n%4==0);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cout << solve() << endl;

    return 0;
}

