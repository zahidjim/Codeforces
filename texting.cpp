#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int solve()
{
    string str;

    getline(cin,str);

    vector<int>vec(27,0);

    for(auto &a: str)
    {
        if(a==' ')
        {
            ++vec.back();
        }
        else
        {
            ++vec[a-'a'];
        }
    }

    int ans = 0;

    sort(vec.rbegin(),vec.rend());

    for(int i=0; i<27; ++i)
    {
        ans += (1 + (i/9))*vec[i];
    }

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cout << solve() << endl;

    return 0;
}

