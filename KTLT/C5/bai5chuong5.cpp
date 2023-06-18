#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n;

int countOne(int n);

int main()
{
    cin >> n;
    cout << countOne(n);
}

int countOne(int n)
{
    int cnt = 0;
    for(int i = 0; i < 32; i++)
    {
        if(n & 1) cnt++;
        n >>= 1;
    }
    return cnt;
}