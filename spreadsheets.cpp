#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define sortt(vec) sort(vec.begin(),vec.end())
#define rsort(vec) sort(vec.rbegin(),vec.rend())
#define rev(str) reverse(str.begin(),str.end())
#define take(vec) do{for(auto &it: vec) cin >> it;} while(0)
#define show(vec) do{for(auto &it: vec) cout << it << ' '; cout << endl;} while(0)
#define shaw(mape) do { for(auto const& [a, b] : (mape)) cout << a << " = " << b << endl; } while(0)
using namespace std;
ll power(ll a, ll b)
{
    ll ans = 1;
    while(b--)
    {
        ans *= a;
    }
    return ans;
}
void cr(string str)
{
    string stt="";
    ll i=0ll,n=str.size(),row=0ll,collum = 0ll;
    while(isalpha(str[i]))
    {
        stt += str[i];
        ++i;
    }

    while(i<n)
    {
        row = row*10ll + str[i]-'0';
        ++i;
    }

    rev(stt);

    n = stt.size();

    for(i=0ll;i<n;++i)
    {
        collum += (stt[i]-'@')*power(26ll,i);
    }

    cout << 'R' << row << 'C' << collum << endl;
    return;
}
void rc(string str)
{
    ll row = 0ll,collum = 0ll,i=1ll,n = str.size();
    while(isdigit(str[i]))
    {
        row = row*10ll + (str[i]-'0');
        ++i;
    }

    ++i;

    while(i<n)
    {
        collum = collum*10ll + (str[i]-'0');
        ++i;
    }

    string stt = "";
    while(collum>0ll)
    {
        stt += ('@' + collum%26ll);
        collum /= 26ll;
        if(stt.back()=='@')
        {
            stt.back()='Z';
            --collum;
        }
    }

    rev(stt);

    stt += to_string(row);
    cout << stt << endl;
    return;
}
void solve()
{
    string str;
    cin >> str;

    int cnt = 0;

    for(int i=1;i<str.size();++i)
    {
        if(isalpha(str[i]) && isdigit(str[i-1]))
        {
            ++cnt;
        }
        else if(isdigit(str[i]) && isalpha(str[i-1]))
        {
            ++cnt;
        }
    }

    if(cnt==3)
    {
        rc(str);
    }
    else
    {
        cr(str);
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
