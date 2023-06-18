#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, nt[N];

void sangngto();

int main()
{
    cin >> n;
    sangngto();
    for(int i = 2; i < n; i++)
        if(!nt[i]) cout << i << endl;
}

void sangngto()
{
    nt[0] = 1;
    nt[0] = 1;
    for(int i = 2; i <= 1000; i++) if(!nt[i])
        for(int j = i * i; j <= 1000000; j += i)
            nt[j] = 1;
}