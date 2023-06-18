#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n;

int F(int n);

int main()
{
    cin >> n;
    cout << F(n);
}

int F(int n)
{
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else if(n % 2 == 0) return F(n / 2);
    else return F(n / 2 + 1) + F(n / 2);
}