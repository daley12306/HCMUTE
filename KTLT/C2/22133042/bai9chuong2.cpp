#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
ll n;

/// PROCESS
string binary(ll x)
{
    ll d = 0;
    string res = "";
    while(x != 0)
    {
        res += (x % 2) + '0';
        x /= 2;
        d++;
    }
    reverse(res.begin(), res.end());
    return res;
}

ll octal(ll x)
{
    ll res = 0, d = 0;
    while(x != 0)
    {
        res += (x % 8) * pow(10,d);
        x /= 8;
        d++;
    }
    return res;
}

string hexadecimal(ll x)
{
    string s = "0123456789ABCDEF";
    string res = "";
    while(x != 0)
    {
        res = s[x % 16] + res;
        x /= 16;
    }
    return res;
}

int main()
{
    /// INPUT
    cin >> n;

    /// OUTPUT
    cout << binary(n) << endl << octal(n) << endl << hexadecimal(n);
}