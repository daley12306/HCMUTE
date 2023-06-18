#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e4 + 7;
int n, A[N], B[N], C[N][N];
int chiphimax = INT_MAX;

void xuat();
void lietKeHV(int k);
void tinhChiPhi();

int main()
{
    cin >> n;
    for(int i = 0 ; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> C[i][j];
    lietKeHV(0);
    cout << chiphimax;
}

void xuat()
{
    for(int i = 0; i < n; i++)
        cout << A[i];
    cout << endl;
}

void tinhChiPhi()
{
    int chiphi = 0;
    for(int i = 0; i < n - 1; i++)
        chiphi += C[A[i]][A[i + 1]];
    chiphi += C[A[n - 1]][A[0]];

    if(chiphi < chiphimax)
        chiphimax = chiphi;
}

void lietKeHV(int k)
{
    if(n == k)
        tinhChiPhi();
    else
    {
        for(int i = 0; i < n; i++)
            if(B[i] == 0)
            {
                A[i] = k;
                B[i] = 1;
                lietKeHV(k + 1);
                B[i] = 0;
            }
    }
}