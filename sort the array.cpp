#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int l=-1,r=-1;

    vector<int>vec(n),temp(n);

    for(int i=0;i<n;++i)
    {
        cin >> vec[i];
        temp[i] = vec[i];
    }

    sort(temp.begin(),temp.end());

    for(int i=0;i<n;++i)
    {
        if(temp[i]!=vec[i])
        {
            l = i;
            break;
        }
    }
    for(int i=n-1;i>=0;--i)
    {
        if(temp[i]!=vec[i])
        {
            r = i;
            break;
        }
    }

    if(l==-1 && r==-1)
    {
        cout << "yes" << endl << 1 << ' ' << 1 << endl;
        return;
    }

    for(int i=l,j=r;i<j;++i,--j)
    {
        swap(vec[i],vec[j]);
    }

    for(int i=0;i<n;++i)
    {
        if(vec[i]!=temp[i])
        {
            cout << "no" << endl;
            return;
        }
    }

    cout << "yes" << endl << ++l << ' ' << ++r << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    solve();
    return 0;
}
