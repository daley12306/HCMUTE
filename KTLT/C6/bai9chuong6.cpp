#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
string s;
map<char, int> cnt;

int main()
{
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
        cnt[s[i]]++;
    for(auto& t : cnt)
        cout << t.first << ": " << t.second << endl;
}