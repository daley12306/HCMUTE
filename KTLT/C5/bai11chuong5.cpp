#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N];

void xuat(int A[], int n);
void sinhTapCon(int n);

int main()
{
    cin >> n;
    cout << " " << endl;
    sinhTapCon(n);
}

void sinhTapCon(int n)
{
    int k = 1;
    xuat(A, k);
    while(A[0] < n - 1)
    {
        while(A[k - 1] < n - 1)
        {
            A[k] = A[k - 1] + 1;
            k++;
            xuat(A, k);
        }

        if(k > 1)
        {
            k--;
            A[k - 1]++;
            xuat(A, k);
        }
    }
}

void xuat(int A[], int n)
{
    for(int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}