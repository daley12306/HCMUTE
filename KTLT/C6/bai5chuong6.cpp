#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e4 + 7;
int m, n, m1, n1, A[N][N], B[N][N], C[N][N];

void nhap(int &m, int &n, int A[][N]);
void xuat(int m, int n, int A[][N]);
void nhanMaTran(int m, int n, int n1, int A[][N], int B[][N]);

int main()
{
    nhap(m, n, A);
    nhap(m1, n1, B);
    nhanMaTran(m, n, n1, A, B);
    if(n == m1) xuat(m, n1, C);
    else cout << -1;
}

void nhap(int &m, int &n, int A[][N])
{
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> A[i][j];
}

void xuat(int m, int n, int A[][N])
{
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}

void nhanMaTran(int m, int n, int n1,int A[][N], int B[][N])
{
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n1; j++)
        {
            int tmp = 0;
            for(int k = 1; k <= n; k++)
                tmp += A[i][k] * B[k][j];
            C[i][j] = tmp;
        }
    }
}