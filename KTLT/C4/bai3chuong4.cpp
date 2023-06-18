#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n;

unsigned long long GiaiThua(int n);

int main()
{
    cin >> n;
    cout << GiaiThua(n);
}

unsigned long long GiaiThua(int n)
{
    if(n == 0 || n == 1) return 1;
    return n * GiaiThua(n - 1);
}