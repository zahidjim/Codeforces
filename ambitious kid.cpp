#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
void take(vector<int>&vec, int n)
{
    for(int i=0; i<n; ++i)
    {
        cin >> vec[i];
        if(vec[i]<0)
        {
            vec[i] *= -1;
        }
    }
    return;
}
int solve()
{
    int n,mn = INT_MAX;
    cin >> n;
    vector<int>vec(n);

    take(vec,n);

    for(int i=0; i<n; ++i)
    {
        mn = min(mn,vec[i]);
    }
    return mn;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve() << endl;

    return 0;
}

