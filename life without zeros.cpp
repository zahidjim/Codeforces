#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int destruct(int n)
{
    int temp;
    vector<int>vec;

    vec.reserve(10);

    while(n)
    {
        temp = n%10;
        n /= 10;

        if(temp)
        {
            vec.push_back(temp);
        }
    }

    reverse(vec.begin(),vec.end());

    temp = 0;

    for(int i=0;i<vec.size();++i)
    {
        temp = temp*10 + vec[i];
    }
    return temp;
}
int solve()
{
    int a,b;
    cin >> a >> b;

    return (destruct(a)+destruct(b))==destruct(a+b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << (solve()?"YES":"NO") << endl;

    return 0;
}

