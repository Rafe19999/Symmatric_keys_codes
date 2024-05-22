#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
string s;
void value()
{
    char a='a';
    for(ll i=0; i<26; i++)
    {
        s.push_back(a);
        a++;
    }
}
int main()
{
    value();

    string str,str2;
    ll k;
    cin>>str>>k;

    for(ll i=0; i<str.size(); i++)
    {
        ll t=s.find(str[i]);
        ll m= (t+k)%26;
        str2.push_back(s[m]);
    }
    cout<<str2<<nl;

    return 0;
}
