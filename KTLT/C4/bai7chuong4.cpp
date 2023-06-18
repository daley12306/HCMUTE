#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
string s;
int sum = 0;

int tongSo(int k, int res);

int main()
{
    cin >> s;
    cout << tongSo(0, 0);
}

int tongSo(int k, int res)
{
    if(k == s.length())
    {
        sum += res;
        return sum;
    }
    if(isdigit(s[k]))
        res = res * 10 + (s[k] - '0');
    else
    {
        sum += res;
        res = 0;
    }
    return tongSo(k + 1, res);
}