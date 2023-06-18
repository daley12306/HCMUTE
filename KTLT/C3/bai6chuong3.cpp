#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
long double x, n, s = 1, tmp_x = 1, tmp_n = 1;

int main()
{
    cin >> n >> x;
    for(int i = 1; i <= n; i++)
    {
        tmp_x *= x;
        tmp_n *= i;
        if(tmp_x / tmp_n < 1e-10) break;
        s += tmp_x / tmp_n;
    }
    cout << fixed << setprecision(2) << s;
}