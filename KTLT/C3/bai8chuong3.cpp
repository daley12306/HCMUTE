#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
double A, s = 0;

int main()
{
    cin >> A;
    int i = 0;
    while (s <= A)
    {
        i++;
        s += (double) 1 / i; 
    }
    cout << i;
}