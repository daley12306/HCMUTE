#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n;
double tmp = 0, res = 0;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        tmp += i;
        res += 1 / tmp;
    }
    cout << fixed << setprecision(6) << res;
}