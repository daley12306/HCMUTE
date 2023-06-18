#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, a[1000][1000], b[1000][1000];
int X[8] = {-1, 0, 0, 1, -1, 1, 1, -1};
int Y[8] = {0, -1, 1, 0, -1, 1, -1, 1};

int main()
{
    /// INPUT
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];

    /// PROCESS
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j] == 1)
            {
                b[i][j] = -1;
                continue;
            }

            int cnt = 0;
            for(int k = 0; k < 8; k++)
                if(a[X[k] + i][Y[k] + j] == 1)
                    b[i][j]++;
        }
    }

    /// OUTPUT
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}
