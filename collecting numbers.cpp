#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
int solve()
{
    int n,cnt =1,temp;
    cin >> n;

    vector<int>vec(n);

    for(int i=0;i<n;++i)
    {
        cin >> temp;
        vec[temp-1] = i+1;
    }
    for(int i=0;i<n-1;++i)
    {
        if(vec[i]>vec[i+1])
        {
            ++cnt;
        }
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
