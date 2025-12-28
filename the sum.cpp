#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int solve()
{
    vector<int>vec(42,0);

    vec[1] = 1;

    for(int i=2; i<42; ++i)
    {
        vec[i] = vec[i-1] + vec[i-2];
    }

    int sum = 0,n;

    cin >> n;

    for(int i=1; i<=n; ++i)
    {
        sum += vec[i];
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cout << solve() << endl;

    return 0;
}

