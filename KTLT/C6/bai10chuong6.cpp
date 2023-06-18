#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
string s, tmp = "", res = "";

int main()
{
    getline(cin, s);
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        if(s[i] != ' ') tmp = s[i] + tmp;
        else
        {
            res += tmp + " ";
            tmp = "";
        }
    }
    res += tmp;
    cout << res;
}