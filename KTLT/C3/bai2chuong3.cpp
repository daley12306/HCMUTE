#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
ll n, res = 0, tmp = 0;

int main()
{
    cin >> n;
    cout << (ll) (n * (n + 1) * (2 * n + 4)) / 12;
}