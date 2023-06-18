#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int m, n, A[N];

void xuat();
void lietKeNP(int k);
int tinhDoSau();


int main()
{
    cin >> m >> n;
    lietKeNP(0);
}

void xuat()
{
    for(int i = 0; i < m; i++)
    {
        if(A[i] == 0) cout << '(';
        else cout << ')';
    }
    cout << endl;
}

void lietKeNP(int k)
{
    if(k == m)
    {
        if(tinhDoSau() == n)
            xuat();
    }
    else
    {
        for(int i = 0; i <= 1; i++)
        {
            A[k] = i;
            lietKeNP(k + 1);
        }
    }
}

int tinhDoSau()
{
    int i = 0, ngoacmo = 0, dosau = 0;
    while(i < m)
    {
        if(A[i] == 0) 
            ngoacmo++;
        else
        {
            if(ngoacmo == 0) return -1;
            dosau = max(dosau, ngoacmo);
            ngoacmo--;
        }
        i++;
    }
    if(ngoacmo == 0) return dosau;
    else return -1;
}