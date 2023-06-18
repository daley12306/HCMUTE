#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e4 + 7;
int m, n, A[N][N];
vector<int> res;

bool minCol(int x, int mx);

int main()
{
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> A[i][j];

    for(int i = 1; i <= m; i++)
    {
        int x;
        int j = 1, maxRow = INT_MIN;
        for(; j <= n; j++)
        {
            if(A[i][j] > maxRow)
            {
                maxRow = A[i][j];
                x = j;
            }
        }
        if(minCol(x, maxRow)) res.push_back(A[i][x]);
    }

    if(res.size() != 0)
        for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
    else cout << -1;
}

bool minCol(int x, int mx)
{
    for(int k = 1; k <= m; k++)
    {
        if(A[k][x] < mx)
            return false;
    }
    return true;
}