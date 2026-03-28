#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << endl;} while(0)
using namespace std;
void solve()
{
    vector<string>arr(9);
    int pos;
    take(arr);
//    for(int i=0;i<9;++i)
//    {
//        pos = i/3 + 3*(i%3);
//        arr[i][pos] = '9' - arr[i][pos] + '0' + (arr[i][pos]=='9');
//    }

    for(int i=0;i<9;++i)
    {
        for(int j=0;j<9;++j)
        {
            if(arr[i][j]=='2')
            {
                arr[i][j] = '1';
            }
        }
    }
    show(arr);
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
