#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
ll n;

ll Fibonacci(ll n);

int main()
{
    cin >> n;
    cout << Fibonacci(n);
}

ll Fibonacci(ll n)
{
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return Fibonacci(n - 1) + Fibonacci(n - 2);
}