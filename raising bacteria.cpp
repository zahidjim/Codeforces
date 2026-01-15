#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int solve()
{
    int n,l,cnt = 0;
    cin >> n;

    l = floor(log2(n))+1;

    for(int i=0;i<l;++i)
    {
        cnt += (bool)(n&(1<<i));
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

