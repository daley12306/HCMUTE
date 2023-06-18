#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll n, tmp = 1, res = 0;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        tmp *= i;
        res += tmp;
    }
    cout << res;
}