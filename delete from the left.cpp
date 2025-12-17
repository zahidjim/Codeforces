#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int solve()
{
    string str,stt;
    cin >> str >> stt;

    int match = 0;

    for(int i=str.size()-1,j=stt.size()-1;i>=0 && j>=0;--i,--j)
    {
        if(str[i]!=stt[j])
        {
            break;
        }
        ++match;
    }

    return str.size()+stt.size()-2*match;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve() << endl;

    return 0;
}

