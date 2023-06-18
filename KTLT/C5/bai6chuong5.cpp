#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, F[N];

int main()
{
    cin >> n;
    F[0] = 0;
    F[1] = 1;
    for(int i = 1; i <= n / 2; i++)
    {
        F[2 * i] = F[i];
        F[2 * i + 1] = F[i] + F[i + 1];
    }

    cout << F[n];
}