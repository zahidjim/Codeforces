#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool fsquare(int n)
{
    double temp = (double)n;
    return (sqrt(temp)==floor(sqrt(temp)));
}
bool solve()
{
    int n;
    cin >> n;

    return ((n%4==0 && fsquare(n/4)) || (n%2==0 && fsquare(n/2)));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        cout << (solve()?"YES":"NO") << endl;
    }
    return 0;
}

