#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
double n, tmp = 1, s = 1;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        tmp *= i;
        s += (double) 1 / tmp;
    }
    cout << fixed << setprecision(2) << s;
}