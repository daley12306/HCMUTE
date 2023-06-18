#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, A[N], s = 0;

bool isArmstrong(int x);

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> A[i];

    for(int i = 1; i <= n; i++)
        if(isArmstrong(A[i]))
            s += A[i];
    
    cout << s;
}

bool isArmstrong(int x)
{
    int n = 0, res = 0;
    int k = x;
    while(k != 0)
    {
        k /= 10;
        n++;
    }

    k = x;
    while(k != 0)
    {
        res += pow(k % 10, n);
        k /= 10;
    }

    if(res == x) return true;
    return false;
}