#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, dp[N], res = 0;
double A[N];

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> A[i];
    
    for(int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for(int j = 1; j < i; j++)
            if(A[i] >= A[j])
                dp[i] = max(dp[i], dp[j] + 1);
        res = max(res, dp[i]);
    }
    cout << res;
}