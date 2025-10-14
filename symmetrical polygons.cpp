#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int solve()
{
    int n,temp;
    cin >> n;

    unordered_map<int,int>mape;

    while(n--)
    {
        cin >> temp;
        ++mape[temp];
    }

    n = 0;

    int cnt = 0,oc=0;

    vector<int>vec;
    vec.reserve(100000);

    for(auto [a,b]: mape)
    {
        if(b&1)
        {
            if(b>1)
            {
                cnt += a*(b-1);
                n += (b-1);
            }
            vec.push_back(a);
        }
        else
        {
           cnt += a*b;
           n += b;
        }
    }

    sort(vec.rbegin(),vec.rend());

//    cout << "vector size = " << vec.size() << endl;

    if(vec.size()==1)
    {
        oc += vec.front();
        ++n;
    }
    else if(vec.size()==3)
    {
        int a=vec[0],b=vec[1],c=vec[2];
        if(((a+b)>c && (b+c)>a && (a+c)>b) && (a==b || b==c || c==a))
        {
            return (a+b+c);
        }
        else
        {
            return 0;
        }
    }
    else if(!(vec.empty()))
    {
        oc += (vec[0]+vec[1]);
        n += 2;
    }

//    cout << "n = " << n << endl;
//    cout << "cnt = " << cnt << endl;
//    cout << "oc = " << oc << endl;

    if(n==3)
    {
        if(cnt<=oc)
        {
            return 0;
        }
        else
        {
            cnt += oc; 
        }
    }
    else
    {
        cnt += oc;
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        cout << solve() << endl;
    }
    return 0;
}
