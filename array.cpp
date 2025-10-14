#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    int n,temp;
    cin >> n;
    vector<int>first,second,third;
    first.reserve(n);
    second.reserve(n);
    third.reserve(n);

    for(int i=0; i<n; ++i)
    {
        cin >> temp;
        if(temp==0)
        {
            third.push_back(temp);
        }
        else if(temp<0)
        {
            if(first.empty())
            {
                first.push_back(temp);
            }
            else
            {
                third.push_back(temp);
            }
        }
        else
        {
            second.push_back(temp);
        }
    }

    if(second.empty())
    {
        sort(third.rbegin(),third.rend());
        second.push_back(third.back());
        second.push_back(third[third.size()-2]);
        third.pop_back();
        third.pop_back();
    }

    cout << first.size();
    for(int i=0; i<first.size(); ++i)
    {
        cout << ' ' << first[i];
    }
    cout << endl;

    cout << second.size();
    for(int i=0; i<second.size(); ++i)
    {
        cout << ' ' << second[i];
    }
    cout << endl;

    cout << third.size();
    for(int i=0; i<third.size(); ++i)
    {
        cout << ' ' << third[i];
    }
    cout << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}

