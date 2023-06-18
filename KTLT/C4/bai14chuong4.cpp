#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e4 + 7;
int n, a, b, A[N][N], dem = 0;
int X[8] = {-2, -2, -1, 1, 2, 2, -1, 1};
int Y[8] = {-1, 1, 2, 2, -1, 1, -2, -2};

void xuat();
void diTuan(int x, int y);

int main()
{
    cin >> n >> a >> b;
    diTuan(a, b);
    cout << -1;
}

void xuat()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}

void diTuan(int x, int y)
{
    dem++;
    A[x][y] = dem;

    for(int k = 0; k < 8; k++)
    {
        if(dem == n * n)
        {
            xuat();
            exit(0);
        }
        int u = x + X[k];
        int v = y + Y[k];
        if(u >= 0 && u < n && v >= 0 && v < n && A[u][v] == 0)
            diTuan(u, v);
    }

    dem--;
    A[x][y] = 0;
}