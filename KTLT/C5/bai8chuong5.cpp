#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
string s;

bool check(string s);

int main()
{
    getline(cin , s);
    cout << check(s);
}

bool check(string s)
{
    int len = s.length();
    for(int i = 0; i < len / 2; i++)
        if(s[i] != s[len - i - 1])
            return false;
    return true;
}