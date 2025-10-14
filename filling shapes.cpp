#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    if(t&1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (1<<(t/2)) << endl;
    }

    return 0;
}

