#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool prime(int n)
{
    if(!(n&1))
    {
        return false;
    }

    int temp = (int)sqrt((double)n);
    for(int i=3; i<=temp; i+=2)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int solve()
{
    int n,cnt,res=0;
    cin >> n;

    if(n<6)
    {
        return 0;
    }

    vector<int>primes;

    primes.reserve(n);

    primes.push_back(2);
    primes.push_back(3);

    for(int i=5; i<=(n/2); i+=2)
    {
        if(prime(i))
        {
            primes.push_back(i);
        }
    }

    int si = primes.size();

    for(int i=6; i<=n; ++i)
    {
        cnt = 0;
        for(int j=0; j<si; ++j)
        {
            if(i%primes[j]==0)
            {
                ++cnt;
            }
        }
        if(cnt==2)
        {
            ++res;
        }
    }
    return res;
}
int main()
{
    cout << solve() << endl;
    return 0;
}

