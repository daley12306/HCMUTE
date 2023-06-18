#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N];

void xuat(int A[], int n);
void sinhHoanVi(int n);
void latNguoc(int A[], int x, int y);

int main()
{
    cin >> n;
    sinhHoanVi(n);
}

void sinhHoanVi(int n)
{
    for(int i = 0; i < n; i++)
        A[i] = i;
    xuat(A, n);
    do
    {
        int k = n - 2;
        while(k >= 0 && A[k] > A[k + 1])
            k--;
        if(k < 0)
            break;
        int l = n - 1;
        while(A[l] < A[k])
            l--;
        swap(A[k], A[l]);
        latNguoc(A, k + 1, n - 1);
        xuat(A, n);
    } while (true);
    
}

void latNguoc(int A[], int x, int y)
{
    while(x < y)
    {
        swap(A[x], A[y]);
        x++;
        y--;
    }
}

void xuat(int A[], int n)
{
    for(int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}