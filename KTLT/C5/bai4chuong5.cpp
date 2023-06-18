#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n, k;

void batBit(int &n, int k);
void tatBit(int &n, int k);
int layBit(int &n, int k);

int main()
{
    cin >> n;
    cout << "Bat bit thu k = ";
    cin >> k;
    batBit(n, k);
    cout << n << endl;
    cout << "Tat bit thu k = ";
    cin >> k;
    tatBit(n, k);
    cout << n << endl;
    cout << "Lay bit thu k = ";
    cin >> k;
    cout << layBit(n, k);
}

void batBit(int &n, int k)
{
    n = n | (0x1 << k);
}

void tatBit(int &n, int k)
{
    n = n & (~(0x1 << k));
}

int layBit(int &n, int k)
{
    return (n >> k) & 0x1;
}