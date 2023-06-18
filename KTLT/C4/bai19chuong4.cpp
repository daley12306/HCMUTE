#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 8;
int A[N][N];

void xuat();
bool kiemTra(int hang, int cot);
bool datHau(int cot);

int main()
{
    if(datHau(0)) xuat();
    else cout << -1;
}

void xuat()
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}

bool kiemTra(int hang, int cot)
{
    int i, j;
    for(i = 0; i < cot; i++)
        if(A[hang][i] == 1)
            return false;

    i = hang;
    j = cot;
    while(i >= 0 && j >= 0)
    {
        if(A[i][j] == 1)
            return false;
        i--;
        j--;
    }

    i = hang;
    j = cot;
    while(i <= N && j >= 0)
    {
        if(A[i][j] == 1)
            return false;
        i++;
        j--;
    }
    
    return true;
}

bool datHau(int cot)
{
    if(cot >= N)
        return true;
    
    for(int i = 0; i < N; i++)
    {
        if(kiemTra(i, cot))
        {
            A[i][cot] = 1;
            if(datHau(cot + 1))
                return true;
            A[i][cot] = 0;
        }
    }
    return false;
}