#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int sum = 0;

    while(n)
    {
        sum += (n%10);

        n /= 10;
    }

    return (sum%4==0);
}
int main()
{
    int n;
    cin >> n;

    while(n)
    {
        if(check(n))
        {
            cout << n << endl;
            return 0;
        }
        ++n;
    }
}
