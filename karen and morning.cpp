#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int solve()
{
    int arr[16] = {0,1,2,3,4,5,10,11,12,13,14,15,20,21,22,23};

    int a,b,c;
    char ch;
    cin >> a >> ch >> b;

    int itime = a*60 + b,ftime;

    for(int i=0;i<16;++i)
    {
        c = arr[i];
        ftime = c*60 + (c%10)*10 + c/10;

        if(itime<=ftime)
        {
            return (ftime-itime);
        }
    }
    return 1440-itime;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve() << endl;

    return 0;
}

