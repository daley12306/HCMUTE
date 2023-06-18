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
    for(int i = 2; i <= n; i++)
        F[i] = F[i - 2] + F[i - 1];

    for(int i = 0; i <= n; i++)
        cout << F[i] << " ";
}