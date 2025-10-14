#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool solve()
{
    int n;
    cin >> n;

    int arr[n],sum=0;

    for(int i=0;i<n;++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int avg = sum/n,temp=0;

    for(int i=0;i<n;++i)
    {
        if(arr[i]>avg)
        {
            temp += (arr[i]-avg);
        }
        else if(arr[i]<avg)
        {
            temp -= (avg-arr[i]);

            if(temp<0)
            {
                return false;
            }

            arr[i] = avg;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        cout << (solve()?"YES":"NO") << endl;
    }
    return 0;
}

