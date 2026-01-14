#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
void take(vector<ll>&vec, ll n)
{
    for(ll i=0; i<n; ++i)
    {
        cin >> vec[i];
    }
    return;
}
bool solve()
{
    ll n,d,a,b;
    cin >> n >> d;
    vector<ll>vec(n);

    take(vec,n);

    bool flag;

    sort(vec.begin(),vec.end());

    if(n>1 && (n&1))
    {
        for(int i=0;i<n;++i)
        {
            flag = true;
            for(int j=0;j<n-1;j+=2)
            {
                a = vec[j];
                b = vec[j+1];

                if(i==j)
                {
                    ++j;
                    a = b;
                    b = vec[j+1];
                }
                else if(i==(j+1))
                {
                    b = vec[j+2];
                    ++j;
                }
                if((b-a)>d)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                return true;
            }
        }
        return false;
    }
    else
    {
        for(ll i=0; i<(n-1); i+=2)
        {
            if((vec[i+1]-vec[i])>d)
            {
                return false;
            }
        }
        return true;
    }

    return true;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    cin >> t;
    while(t--)
    {
        cout << (solve()?"YES":"NO") << endl;
    }
    return 0;
}
