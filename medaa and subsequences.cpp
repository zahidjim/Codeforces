#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
void take(vector<int>&vec, int n)
{
    for(int i=1; i<=n; ++i)
    {
        cin >> vec[i];
        vec[i] += vec[i-1];
    }
    return;
}
bool solve()
{
    int n;
    cin >> n;
    vector<int>vec(n+1,0);

    take(vec,n);

    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<=n; ++j)
        {
            if((vec[j]-vec[i])%n==0)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cout << (solve()?"YES":"NO") << endl;

    return 0;
}
