#include<bits/stdc++.h>
#define ll long long

using namespace std;
 
const int N = 1e6 + 7;
int n;

void hanoi(int n, char nguon, char dich, char tam);

int main()
{
    cin >> n;
    hanoi(n, 'A', 'C', 'B');
}

void hanoi(int n, char nguon, char dich, char tam)
{
    if(n > 0)
    {
        hanoi(n - 1, nguon, tam, dich);
        cout << "Chuyen dia thu " << n << " tu cot " << nguon << " den cot " << dich << endl;
        hanoi(n - 1, tam, dich, nguon);
    }
}