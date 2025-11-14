#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool solve()
{
    int n,one=0,two=0,temp;
    cin >> n;

    while(n--)
    {
        cin >> temp;
        temp /= 100;

        if(temp==1)
        {
            ++one;
        }
        else
        {
            ++two;
        }
    }

    if(one==0)
    {
        return (two&1);
    }
    else if(two==0)
    {
        return (one&1);
    }
    else
    {
        return ((one+2*two)&1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cout << (!solve()?"YES":"NO") << endl;

    return 0;
}

