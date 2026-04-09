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
bool solve(int t)
{
    string str,stt,ans = "";
    cin >> str >> stt;

    int temp = 0;
    for(int i=0;i<8;++i)
    {
        temp += (stt[i]-'0')*(1<<(7-i));
    }

    ans += (to_string(temp) + ".");

    temp = 0;

    for(int i=9;i<17;++i)
    {
        temp += (stt[i]-'0')*(1<<(16-i));
    }

    ans += (to_string(temp) + ".");

    temp = 0;

    for(int i=18;i<26;++i)
    {
        temp += (stt[i]-'0')*(1<<(25-i));
    }

    ans += (to_string(temp) + ".");

    temp = 0;

    for(int i=27;i<35;++i)
    {
        temp += (stt[i]-'0')*(1<<(34-i));
    }

    ans += (to_string(temp));

    cout << "Case " << t << ": ";
    return (ans==str);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    for(int i=1;i<=t;++i)
    {
        cout << (solve(i)?"YES":"NO") << endl;
    }
    return 0;
}
