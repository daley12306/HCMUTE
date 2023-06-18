#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N], dp[N], res = INT_MIN;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> A[i];

    for(int i = 1; i <= n; i++)
    {
        dp[i] = A[i];
        for(int j = 1; j <= n; j++)
            if(A[i] > A[j])
                dp[i] = max(dp[i], dp[j] + A[i]);
        res = max(res, dp[i]);
    }
    cout << res;
}