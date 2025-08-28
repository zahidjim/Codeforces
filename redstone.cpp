#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool solve()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin >> arr[i];
    }

    for(int i=0;i<(n-1);++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(arr[i]==arr[j])
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

    int t;
    cin >> t;
    while(t--)
    {
        cout << (solve()?"YES":"NO") << endl;
    }
    return 0;
}

