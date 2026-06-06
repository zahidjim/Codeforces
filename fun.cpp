#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
int solve()
{
    ll n,x,t1=3,t2=3,cnt=0,i,j,k;
    cin >> n >> x;

    for(i=1;t1<=x && t2<=n;++i)
    {
        for(j=i;;++j)
        {
            if(t1>x || t2>n)
            {
                t1 = 3*i+3;
                t2 = 3*(i+1)*(i+1);
                break;
            }
            for(k=j;;++k)
            {
                t1 = i+j+k;
                t2 = i*j+j*k+i*k;

                if(t1<=x && t2<=n)
                {
                    if(i==j && j==k)
                    {
                        ++cnt;
                    }
                    else if(i==j || j==k || i==k)
                    {
                        cnt += 3;
                    }
                    else
                    {
                        cnt += 6;
                    }
                }
                else
                {
                    t1 = i+2*j+2;
                    t2 = 2*i*(j+1) + (j+1)*(j+1);
                    break;
                }
            }
        }
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}
