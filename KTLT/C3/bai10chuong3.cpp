#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
string s;
int thuong = 0, hoa = 0, so = 0, khac = 0;

int main()
{
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z') thuong++;
        else if(s[i] >= 'A' && s[i] <= 'Z') hoa++;
        else if(isdigit(s[i])) so++;
        else khac++;
    }
    cout << thuong << " " << hoa << " " << so << " " << khac;
}