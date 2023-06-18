#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N];

int findMinOdd();

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> A[i];
    cout << findMinOdd();
}

int findMinOdd()
{
    sort(A + 1, A + 1 + n);
    int i = n;
    for(; i >= 1; i--)
        if(A[i] % 2 == 0)
            break;

    for(; i <= n; i++)
        if(A[i] % 2 != 0)
            break;
    return A[i];
}