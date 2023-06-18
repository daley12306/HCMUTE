#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
string s, res = "";

int main()
{
    /// INPUT
    getline(cin,s);

    /// PROCESS
    s += ' ';
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z') res += s[i];
        else if(s[i] == ' ' && s[i - 1] >= 'a' && s[i - 1] <= 'z') res += ' ';
    }
    res[0] -= 32;

    /// OUTPUT
    cout << res;
}