#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, k, A[N];

void xuat(int A[], int n);
void lietKeTH(int n, int k);

int main()
{
    cin >> n;
    // cin >> k;
    // lietKeTH(n, k);
    for(int k = 0; k <= n; k++)
        lietKeTH(n, k);
}

void lietKeTH(int n, int k)
{
    int i;
    for(i = 0; i < k; i++) 
        A[i] = i;
    xuat(A, k);
    i = k - 1;
    while (i >= 0)
    {
        while(A[i] < n - k + i)
        {
            A[i]++;
            for(int j = i + 1; j < k; j++)
                A[j] = A[j - 1] + 1;
            xuat(A, k);
            i = k - 1;
        }
        i--;
    }
    
}

void xuat(int A[], int n)
{
    cout << "{ ";
    for(int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << "}";
    cout << endl;
}