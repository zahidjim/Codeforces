#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;

    queue<int>vec;

    for(int i=1; i<=n; ++i)
    {
        vec.push(i);
    }

    while(!vec.empty())
    {
        for(int i=0; i<k; ++i)
        {
            vec.push(vec.front());
            vec.pop();
        }
        cout << vec.front() << ' ';
        vec.pop();
    }

    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
